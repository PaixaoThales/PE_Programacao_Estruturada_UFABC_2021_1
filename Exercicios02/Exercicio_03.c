#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, i;
    scanf("%d", &n);
    while(n < 0){
        printf("O numero deve ser >=0!\n");
        scanf("%d", &n);
    }
    for(i = n; i >= 0; i--){
        printf("%d ", i);
    }
    printf("\nFIM!\n");
    return 0;
}