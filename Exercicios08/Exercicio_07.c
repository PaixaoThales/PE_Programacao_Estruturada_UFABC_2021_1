#include <stdio.h>
#include <stdlib.h>

int* inverteTexto(char texto[6]);

int* inverteTexto(char texto[6]){
    char *p = malloc(sizeof(texto));
    for(int x = 0; x < strlen(texto); x++){
        *(p + x) = texto[(strlen(texto) - 1) - x];
    }
    return p;
}

int main(int argc, char const *argv[]){
    char texto[6], *ptrTexto = NULL;
    scanf("%s", &texto);
    ptrTexto = inverteTexto(texto);
    for(int x = 0; x < strlen(texto); x++){
        printf("%c ", *(ptrTexto + x));
    } 
    return 0;
}