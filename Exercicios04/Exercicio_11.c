#include <stdio.h>
#include <stdlib.h>

int soma(int num);

int soma(int num){
    if(num == 1){
       return 1;
   }else{
       return num + soma(num - 1);
   } 
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    printf("%d", soma(n));
    return 0;
}