#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; n >= i; i++){
        printf("%d ", i);
    }
    printf("\n");
    for(j = n; j >= 0; j--){
        printf("%d ", j);
    }
    return 0;
}