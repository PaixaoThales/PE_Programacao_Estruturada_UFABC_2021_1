#include <stdio.h> 
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("Antecessor de %d eh: %d\nSucessor de %d eh: %d\n", n, (n - 1), n, (n + 1));
    
    return 0;
}