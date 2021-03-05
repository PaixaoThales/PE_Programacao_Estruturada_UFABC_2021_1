#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

int procuraVetor(int vetor[], int procurado, int tam);

int procuraVetor(int vetor[], int procurado, int tam){
    for(int k = 0; k < tam; k++){
        if(vetor[k] == procurado){
            return vetor[k];
        }
    }
    return -1;
}
int main(int argc, char *argv[]){
    int vetor[tamanho];
    int auxiliar, cont = 0;
    while(cont < 10){
        scanf("%d", &auxiliar);
        if(procuraVetor(vetor, auxiliar, cont) == -1){
            vetor[cont] = auxiliar;
            cont += 1;
        }else{
            printf("Numero já digitado! Digite outro numero!\n");
        }
    }
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}