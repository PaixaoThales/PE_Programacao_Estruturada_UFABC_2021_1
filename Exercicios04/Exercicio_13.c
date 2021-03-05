#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int somaVetor(int num[], int tamanho);

int somaVetor(int num[], int tamanho){
    if(tamanho == 0){
       return num[0];
   }else{
       return num[tamanho] + somaVetor(num, (tamanho - 1));
   } 
}
int main(int argc, char *argv[]){
    int vetor[TAM];
    for(int x = 0; x < TAM; x++){
        scanf("%d", &vetor[x]);
    }
    printf("%d", somaVetor(vetor, (TAM - 1)));
    return 0;
}