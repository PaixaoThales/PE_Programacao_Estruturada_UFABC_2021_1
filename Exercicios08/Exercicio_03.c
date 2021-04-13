#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n, aux = 0, *ptrVetor;
    erro:
    scanf("%d", &n);
    if(n < 0){
        printf("Numero deve ser POSITIVO! Digite um numero VALIDO!!\n");
        goto erro;
    }
    ptrVetor = malloc(sizeof(int) * n);
    int x = 0;
    while(x < n){
        erroS:
        scanf("%d", &aux);
        if(aux < 2){
            printf("Digite um numero >=2!\n");
            goto erroS;
        }
        ptrVetor[x] = aux;
        x++;
    }    
    for(int x = 0; x < n; x++){
        printf("%d ", *(ptrVetor + x));
    }    
    free(ptrVetor);
    return 0;
}