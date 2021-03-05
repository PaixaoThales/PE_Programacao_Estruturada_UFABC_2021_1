#include <stdio.h>
#include <stdlib.h>
#define tamanho 8

int main(int argc, char *argv[]){
    char palavra[tamanho];
    int cont = 0;
    scanf("%s", &palavra);
    //scanf("%[^\n]", &palavra);
    //gets(palavra);
    while(1){
        if(palavra[cont] != '\0'){
            printf("%c\n", palavra[cont]);
            cont += 1;
        }else{
            break;
        } 
    }
    printf("%d", cont);
    return 0;
}