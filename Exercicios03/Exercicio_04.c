#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int vetor[8];
    for(int j = 0; j < 8; j++){
        scanf("%d", &vetor[j]);
    }
    int x, y;
    scanf("%d", &x);
    while(1){
        if(x >= 0 && x <= 8){
            break;
        }else{
            printf("Valor de X invalido!\n");
            scanf("%d", &x);
        }
    }
    scanf("%d", &y);
    while(1){
        if(y >= 0 && y <= 8){
            break;
        }else{
            printf("Valor de Y invalido!\n");
            scanf("%d", &y);
        }
    }
    printf("Soma eh: %d", (vetor[x] + vetor[y]));
    return 0;
}
/*
 int x, y, auxiliarX, auxiliarY, i = 0;
    scanf("%d", &auxiliarX);
    scanf("%d", &auxiliarY);
    while(i != 2){
        if(auxiliarX >= 0 && auxiliarX <= 8){
            x = auxiliarX;
            i += 1;
        }else{
            printf("Valor de X invalido!\n");
            scanf("%d", &auxiliarX);
        }
        if(y >= 0 && y <= 8){
            y = auxiliarY;
            i += 1;
        }else{
            printf("Valor de Y invalido!\n");
        }
    }
*/