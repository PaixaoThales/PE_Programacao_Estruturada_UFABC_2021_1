#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int vetor[5];
    float media;
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        media += (float) vetor[i];
    }
    media /= (float) 5;
    for(int j = 0; j < 5; j++){
        printf("%d ", vetor[j]);
    }
    printf("\n%.2f", media);
    return 0;
}