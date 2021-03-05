#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n;
    float resultado = 1.0;
    scanf("%d", &n);
    for(int i = 2; n >= i; i++){
        resultado += (float) 1 / i;
    }
    printf("%.1f", resultado);
    return 0;
}
