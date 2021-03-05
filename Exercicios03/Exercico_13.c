#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 8

int main(int argc, char *argv[]){
    char palavra[tamanho];
    while(1){
        scanf("%s", &palavra);
        if(strlen(palavra) > 5){
            printf("Digite novamente a string com ate 5 caracteres:\n");
        }else{
            for(int i = 5; i >= 0; i--){
                printf("%c ", palavra[i]);
            }
            break;
        }
    }
    return 0;
}