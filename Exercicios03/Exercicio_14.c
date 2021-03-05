#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 8

int main(int argc, char *argv[]){
    char palavra[tamanho];
    char letra;
    int cont = 0;
    scanf("%s", &palavra);
    scanf(" %c", &letra);
    for(int l = 0; l < strlen(palavra); l++){
        if(palavra[l] == 'a' || palavra[l] == 'e' || palavra[l] == 'i' || palavra[l] == 'o' || palavra[l] == 'u'){
            cont += 1;
            palavra[l] = letra;
        }
    }
    printf("A string possui %d vogais.\n", cont);
    printf("%s", palavra);
    return 0;
}