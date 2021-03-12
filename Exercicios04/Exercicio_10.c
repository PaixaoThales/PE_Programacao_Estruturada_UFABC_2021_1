#include <stdio.h>
#include <stdlib.h>

int somaCubos(int num);

int somaCubos(int num){
    if(num == 1){
       return 1;
   }else{
       return (num * num * num) + somaCubos(num - 1);
   } 
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    printf("%d", somaCubos(n));
    return 0;
}