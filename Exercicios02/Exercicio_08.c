#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int fatorial(int n){
   if(n == 1){
       return 1;
   }else{
       return n * fatorial(n - 1);
   }  
}

int main(int argc, char *argv[]){
    int n;
    float resultado = 1.0;
    scanf("%d", &n);
    for(int i = 2; n >= i; i++){
        resultado += (float) 1 / fatorial(i);
    }
    printf("%f", resultado);
    return 0;
}
