#include <stdio.h>
#include <stdlib.h>

float operador(float a, float b, char caracter);

float operador(float a, float b, char caracter){
    if(caracter == '+'){
        return a + b;
    }else if(caracter == '-'){
        return a - b;
    }else if(caracter == '*'){
        return a * b;
    }else if(caracter == '/'){
        return a / b;
    }else{
        return 0;
    }
}

int main(int argc, char *argv[]){
    float a, b;
    char caractere;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf(" %c", &caractere);
    printf("%f\n", operador(a, b, caractere));
    return 0;
}