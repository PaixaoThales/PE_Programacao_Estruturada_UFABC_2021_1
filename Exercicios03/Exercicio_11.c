#include <stdio.h>
#include <stdlib.h>
#define tamanho 8

int main(int argc, char *argv[]){
    char palavra[tamanho];
    int cont = 0;
    while(1){
        gets(palavra);
        cont = strlen(palavra);
        if(cont != 8){
            printf("Voce digitou uma string com %d caractere(s)!\nA string deve ter 8 caracteres. Por favor, digite uma nova string:\n", cont);
        }else{
            for(int i = 0; i < 4; i++){
                printf("%c", palavra[i]);
            }
            break;
        }
    }
    return 0;
}