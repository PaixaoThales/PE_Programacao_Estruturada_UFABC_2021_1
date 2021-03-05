#include <stdio.h>
#include <stdlib.h>

int print(int num, int atual);

int print(int num, int atual){
    if(atual == (num + 1)){
       return num;
   }else{
       printf("%d ", atual);
       return print(num, (atual + 1));
   } 
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    print(n, 0);
    return 0;
}