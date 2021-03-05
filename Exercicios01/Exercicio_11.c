#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    if(n < 0 || n > 4){
        printf("Numero Invalido!");
    }else if(n == 3){
        double n2, n3;
        scanf("%lf", &n2);
        scanf("%lf", &n3);
        printf("O resultado da divisao eh: %lf", (n2 / n3));
    }else{
        int n1, n2;
        scanf("%d", &n1);
        scanf("%d", &n2);
        if(n == 1){
            printf("O resultado da soma eh: %d", (n1 + n2));
        }else if(n == 2){
            printf("O resultado da subtracao eh: %d", (n1 - n2));
        }else{
            printf("O resultado da multiplicacao eh: %d", (n1 * n2));
        }
    }
    /*
    if(n == 1){
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("O resultado da soma eh: %d", (n1 + n2));
    }else if(n == 2){
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("O resultado da subtracao eh: %d", (n1 - n2));
    }else if(n == 3){
        double n2, n3;
        scanf("%lf", &n2);
        scanf("%lf", &n3);
        printf("O resultado da divisao eh: %lf", (n2 / n3));
    }else if(n == 4){
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("O resultado da multiplicacao eh: %d", (n1 * n2));
    }else{
        printf("Numero Invalido!");
    }
    */
   return 0;
}