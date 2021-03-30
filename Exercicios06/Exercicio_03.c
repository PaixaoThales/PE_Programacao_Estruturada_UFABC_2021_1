#include <stdio.h>
#include <stdlib.h>

void trocaValores(int *A, int *B);

void trocaValores(int *A, int *B){
    int aux = *A;
    *A = *B;
    *B = aux;
}

int main(int argc, char const *argv[]){
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    trocaValores(&x, &y);
    printf("%d\n%d", x, y);
    return 0;
}