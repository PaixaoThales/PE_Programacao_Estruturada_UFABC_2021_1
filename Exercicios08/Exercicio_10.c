#include <stdio.h>
#include <stdlib.h>

int* preecheMatriz(int n);

int* preecheMatriz(int n){
    int* p = malloc(sizeof(int) * n * n), l = 0, c = 0;
    for(int x = 0; x < n * n; x++){
        if(c == n){
            l += 1;
            c = 0;
        }
        if(l == c){
            *(p + x) = 0;
        }else if(l > c){
            *(p + x) = -1;
        }else{
            *(p + x) = 1;
        }
        c += 1;
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