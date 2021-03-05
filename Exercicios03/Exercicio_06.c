#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

int main(int argc, char *argv[]){
    float vetor[tamanho];
    int quantNegativo = 0;
    float soma = 0.0;
    for(int j = 0; j < tamanho; j++){
        scanf("%f", &vetor[j]);
    }
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] < 0){
            quantNegativo += 1;
        }else{
            soma += vetor[i];
        }
    }
    printf("%d\n", quantNegativo);
    printf("%f", soma);
    return 0;
}