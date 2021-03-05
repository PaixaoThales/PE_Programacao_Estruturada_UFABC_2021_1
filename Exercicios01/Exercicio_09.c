#include <stdio.h> 
#include <stdlib.h>

int main(){
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1 > n2){
        printf("O %d eh o maior numero!", n1);
    }else if(n2 > n1){
        printf("O %d eh o maior numero!", n2);
    }else{
        printf("Numeros Iguais!");
    }

    return 0;
}