#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#define Class struct

Class Pessoa{
    char nome[10];
    uint8_t idade;
    uint8_t altura;
     void(*show)(Class Pessoa *);
};

void pessoa_print(Class Pessoa *this){
    printf("Pessoa: %s %d %d\n", this->nome, this->idade, this->altura);
}

Class Pessoa * newPessoa(char nome[], uint8_t idade, uint8_t altura){
    Class Pessoa *this = (Class Pessoa *) malloc(sizeof(Class Pessoa *));
    strcpy(this->nome, nome);
    this->idade = idade;
    this->altura = altura;
    this->show = &pessoa_print;
    return this;
}

int main(int argc, char const *argv[]){
    Class Pessoa *pessoa1 = (Class Pessoa *) newPessoa("Thomas", 21 , 187);
    pessoa1->show(pessoa1);
    return 0;
}