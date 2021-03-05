#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; n >= i; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(j = 0; n >= j; j++){
        if(j % 2 == 0){
            printf("%d ", j);
        }
    }
    return 0;
}