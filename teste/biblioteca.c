#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b);
void toUpperCPP(char* d, int count);
void toUpper_Branchless(char* d, int count);

int maior(int a, int b){
    return a * (a > b) + b * (b >= a);
}
void toUpperCPP(char* d, int count){
    for(int i = 0; i < count; i++){
        if(d[i] >= 'a' && d[i] <= 'z'){
            d[i] -= 32;
        }
    }
}
/*void toUpper_Branchless(char* d, int count){
    for(int i = 0; i < count; i++){
        d[i] = (d[i] * !(d[i] >= 'a' && d[i] <= 'z')) + (d[i] - 32) * (d[i] >= 'a' && d[i] <= 'z');
    }
}*/
void toUpper_Branchless(char* d, int count){
    for(int i = 0; i < count; i++){
        d[i] -= 32 * (d[i] >= 'a' && d[i] <= 'z');
    }
}

int main(int argc, char const *argv[]){
    //printf("%d", maior(-1, 8));
    char nome[20] = "thomas";
    toUpper_Branchless(nome, 2);
    printf("%s", nome);
    return 0;
}