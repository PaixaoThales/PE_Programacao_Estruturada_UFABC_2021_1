#include <stdio.h>
#include <stdlib.h>

int* preecheMatriz(int n);

int* preecheMatriz(int n){
    int* p = malloc(sizeof(int) * n * n);
    for(int x = 0; x < n * n; x++){
        if(x % (n + 1) == 0){
            *(p + x) = 1;
        }else{
            *(p + x) = 0;
        }
       
    }
    return p;
}

int main(int argc, char const *argv[]){
    int n, *prtMatriz = NULL;
    scanf("%d", &n);
    prtMatriz = preecheMatriz(n);
    for(int x = 0; x < n * n; x++){
        printf("%d ", *(prtMatriz + x));
        if((x + 1) % n == 0){
            printf("\n");
        }
    } 
    return 0;
}