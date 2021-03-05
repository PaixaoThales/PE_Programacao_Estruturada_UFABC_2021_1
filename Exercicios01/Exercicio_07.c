#include <stdio.h> 
#include <stdlib.h>

int main(){
    float n = 780.00;
    printf("Primeiro ganhador: R$ %.2f\nSegundo ganhador: R$ %.2f\nTerceiro ganhador: R$ %.2f\n", (n * 0.46), (n * 0.32), (n * (1 - (0.46 + 0.32))));
    return 0;
}