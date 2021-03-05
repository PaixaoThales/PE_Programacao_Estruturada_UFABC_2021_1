#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = 0, resultado = 0;
    scanf("%d", &n);
    for(int i = (n - 1); i > 0; i--){
        if(n % i == 0){
            resultado += i;
        }
    }
    printf("%d", resultado);
    return 0;
}