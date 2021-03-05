/*#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int fatorial(int n){
    int resultado = 1, x = 1;
    while(x != n + 1){
        resultado *= x;
        x += 1;
    }
    return resultado;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fatorial(n));
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int resultado = 1, x = 1;
    while(x != n + 1){
        resultado *= x;
        x += 1;
    }
    return resultado;
}

void main(){
    int num;
    float somatoria = 1.0;
    scanf("%d", &num);
    while(num > 0){
        somatoria = somatoria + (float)  (1 / fatorial(num));
        num = num - 1;
    }
    printf("%f", somatoria);
}*/
#include <stdio.h>

int fatorial(int n){
    int resultado = 1, x = 1;
    while(x != n + 1){
        resultado *= x;
        x += 1;
    }
    return resultado;
}

float n, i = 1, j;
float result, resultP;

void main(){
    scanf("%f", &n);
    while (i <= n){
        j = i;
        result = result + (float)1/fatorial(j);
        i = i + 1;
    }
    printf("%f", result);
}