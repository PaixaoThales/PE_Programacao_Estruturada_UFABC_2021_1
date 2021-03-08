#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float q_rsqrt(float num);

float q_rsqrt(float num){
    long i;
    float x2, y;
    const float threehalfs = 1.5F;
    x2 = num * 0.5F;
    y = num;
    i = * (long *) &y;
    i = 0x5f3759df - (i >> 1);
    y = * (float *) &i;
    y = y * (threehalfs - (x2 * y * y));
    y = y * (threehalfs - (x2 * y * y)); //Excluivel
    return y;

}

int main(int argc, char const *argv[]){
    float n = 0;
    scanf("%f", &n);
    printf("%f\n", 1/sqrt(n));
    printf("%f", q_rsqrt(n));

    return 0;
}