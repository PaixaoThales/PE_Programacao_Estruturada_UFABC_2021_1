#include <stdio.h>
#include <stdlib.h>


struct Pessoa{
    char nome[20];
    int idade;
};

void criarPessoa(char nome[], int idade, void(*function_pointer)(struct Pessoa));

void printPessoa(struct Pessoa pessoa);

void criarPessoa(char nome[], int idade, void(*function_pointer)(struct Pessoa)){
    struct Pessoa pessoa;
    strcpy(pessoa.nome, nome);
    pessoa.idade = idade;
    (*function_pointer)(pessoa);
}

void printPessoa(struct Pessoa pessoa){
    printf("Nome: %s\nIdade: %d\n", pessoa.nome, pessoa.idade);
}

int main(int argc, char const *argv[]){
    char nome[20];
    int idade;
    scanf("%s", &nome);
    scanf("%d", &idade);
    criarPessoa(nome, idade, &printPessoa);
    return 0;
}