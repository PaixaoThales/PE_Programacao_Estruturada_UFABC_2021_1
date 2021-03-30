#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void trocaLetras(char letra, char *ptrTexto);

void trocaLetras(char letra, char *ptrTexto){
    for(int c = 0; c < TAM ; c++){
        *(ptrTexto + c) = letra;
    }    
}

int main(int argc, char const *argv[]){
    char texto[TAM], letra;
    char *ptrTexto = &texto;
    for(int x = 0; x < TAM; x++){
        scanf(" %c", (ptrTexto + x));
    } 
    scanf(" %c", &letra);
    trocaLetras(letra, ptrTexto);
    while(*ptrTexto != '\0'){
        putchar(*ptrTexto++);
    }
    /*
    for(int i = 0; i < TAM; i++){
        printf("%c",*(ptrTexto + i));
    }
    */ 
    return 0;
}