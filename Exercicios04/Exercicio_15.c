#include <stdio.h>
#include <stdlib.h>

int somaSucessivas(int x, int y);

int somaSucessivas(int x, int y){
    if(y == 1){
       return x;
   }else{
       return x + somaSucessivas(x, (y - 1));
   } 
}

int main(int argc, char *argv[]){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d", somaSucessivas(x, y));
    return 0;
}