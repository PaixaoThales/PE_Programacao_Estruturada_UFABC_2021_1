#include <stdio.h>
#include <stdlib.h>

int* insereVetor(int n, int valor);

int* insereVetor(int n, int valor){
    int* p = NULL;
    if(valor > 0){
        p = malloc(sizeof(int) * n);
        for(int x = 0; x < n; x++){
            *(p + x) = valor;
        }
    }else{
        printf("NULL\n");
        exit(0);
    }
    
    return p;
}

int main(int argc, char const *argv[]){
    int n, valor, *prtVetor = NULL;
    scanf("%d", &n);
    scanf("%d", &valor);
    prtVetor = insereVetor(n, valor);
    for(int x = 0; x < n; x++){
        printf("%d ", *(prtVetor + x));
    } 
    return 0;
}