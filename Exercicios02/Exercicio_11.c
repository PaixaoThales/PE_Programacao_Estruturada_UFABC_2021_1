#include <stdio.h>
#include <stdlib.h>

void ehQuadradoPerfeito(int n);

void ehQuadradoPerfeito(int n){
    for(int i = (n - 1); i > 0; i--){
        if((i * i) == n){
            printf("Eh um quadrado perfeito!");
            break;
        }else if((i * i) < n){
            printf("Nao eh um quadrado perfeito!");
            break;
        }
    }
}

i   int n = 0, resultado = 0;
    scanf("%d", &n);
  nt main(int argc, char *argv[]){
   ehQuadradoPerfeito(n);
    return 0;
}