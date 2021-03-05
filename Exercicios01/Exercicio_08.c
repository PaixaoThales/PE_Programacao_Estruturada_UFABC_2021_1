#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    c = sqrt((pow(a, 2) + pow(b, 2)));
    printf("A hipotenusa eh: %f", c);
    return 0;
}