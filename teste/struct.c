#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Pessoa{
    char nome[10];
    uint8_t idade;
    uint8_t altura;
};

void criarPessoa(char nome[], uint8_t idade, uint8_t altura, void(*function_pointer)(struct Pessoa));

void printPessoa(struct Pessoa pessoa);

void criarPessoa(char nome[], uint8_t idade, uint8_t altura, void(*function_pointer)(struct Pessoa)){
    struct Pessoa pessoa;
    strcpy(pessoa.nome, nome);
    pessoa.idade = idade;
    pessoa.altura = altura;
    (*function_pointer)(pessoa);
}

void printPessoa(struct Pessoa pessoa){
    printf("Pessoa: %s %d %d\n", pessoa.nome, pessoa.idade, pessoa.altura);
}

int main(int argc, char const *argv[]){
    criarPessoa("Thomas", 21, 180, &printPessoa);
    return 0;
}