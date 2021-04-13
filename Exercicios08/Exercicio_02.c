#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n, *ptrVetor;
    scanf("%d", &n);
    ptrVetor = malloc(sizeof(int) * n);
    for(int x = 0; x < n; x++){
        scanf("%d", ptrVetor + x);
    }
    for(int x = 0; x < n; x++){
        printf("%d ", *(ptrVetor + x));
    }    
    free(ptrVetor);
    return 0;
}