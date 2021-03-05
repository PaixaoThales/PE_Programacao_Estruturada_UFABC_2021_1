#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

//tamanho do vetor: sizeof(vetor) / sizeof(vetor[0])

int procuraVetor(int vetor[], int procurado, int tam);

int procuraVetor(int vetor[], int procurado, int tam){
    for(int k = 0; k < tam; k++){
        if(vetor[k] == procurado){
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[]){
    int vetor[tamanho];
    int maior = 1, menor = 1;
    for(int j = 0; j < tamanho; j++){
        scanf("%d", &vetor[j]);
        if(maior < vetor[j]){
            maior = vetor[j];
        }
        if(menor > vetor[j]){
            menor = vetor[j];
        }
    }
    printf("Numeros pares:\n");
    for(int c = 0; c < tamanho; c++){
        if(vetor[c] % 2 == 0){
            if(procuraVetor(vetor, vetor[c], c) == 0){
                printf("%d\n", vetor[c]);
            }   
        }      
    }
    printf("Numeros impares:\n");
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % 2 != 0){
            if(procuraVetor(vetor, vetor[i], i) == 0){
                printf("%d\n", vetor[i]);
            }
        }      
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);
    return 0;
}
/*
if(auxiliar % 2 == 0){
            if(findElement(pares, tamanho, auxiliar) == -1){
                pares[j] = auxiliar;
            }   
        }else{
            if(findElement(impares, tamanho, auxiliar) == -1){
                impares[j] = auxiliar;
            }
        }
        if(maior < auxiliar){
            maior = auxiliar;
        }
        if(menor > auxiliar){
            menor = auxiliar;
        }
*/