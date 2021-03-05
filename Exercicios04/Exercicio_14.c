#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y);

int potencia(int x, int y){
    if(y == 1){
       return x;
   }else{
       return x * potencia(x, (y - 1));
   } 
}

int main(int argc, char *argv[]){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d", potencia(x, y));
    return 0;
}