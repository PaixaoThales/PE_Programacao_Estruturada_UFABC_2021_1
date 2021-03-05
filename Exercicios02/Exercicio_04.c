#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = 0, a, b, c, resultado, menor;
    char controle = 'A';
    while(n >=0 && n <=3){
        scanf("%d", &n);
        if(n == 0){
            break;
        }else{
            scanf("%d", &a);
            scanf("%d", &b);
            if(n == 1){
                resultado = a + b;
                printf("(a+b) = %d\n", resultado);
            }else if(n == 3){
                resultado = a * b;
                printf("(a*b) = %d\n", resultado);
            }else if(n == 2){
                scanf("%d", &c);
                resultado = a + b + c;
                printf("(a+b+c) = %d\n", resultado);                
            }
        }
        if(controle == 'A'){
            controle = 'B';
            menor = resultado;
        }
        if(resultado < menor){
            menor = resultado;
        } 
    }
    if(controle == 'A'){
       printf("Nenhum calculo foi realizado!\n");
    }else{
        printf("Menor resultado: %d\n", menor);
    }
    return 0;
}