#include <stdio.h>
#include <stdlib.h>

int* criaPonteiro(int n);

int* criaPonteiro(int n){
    int *ptrVetor = NULL;
    if(n > 0){
        ptrVetor = malloc(sizeof(int) * n);
        printf("Ponteiro NAO NULL.\n");
    }else{
        printf("Ponteiro NULL.\n");
    }  
    return ptrVetor;
}    

int main(int argc, char const *argv[]){
    int *ptrVetor = NULL, n = 0;
    scanf("%d", &n);
    ptrVetor = criaPonteiro(n);
    free(ptrVetor);
    return 0;
}