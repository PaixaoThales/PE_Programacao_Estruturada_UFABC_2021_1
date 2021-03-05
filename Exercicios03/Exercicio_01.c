#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int vetor[6];
    for(int i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);
    }
    for(int j = 5; j >= 0; j--){
        printf("%d ", vetor[j]);
    }
    return 0;
}