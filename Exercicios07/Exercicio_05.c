#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void calculo(float R, float *area, float *volume);

void calculo(float R, float *area, float *volume){
    *area = 4 * PI * R * R;
    *volume = (4 * PI * R * R *R) / 3;
}

int main(int argc, char const *argv[]){
    float raio, *volume = NULL, *area = NULL;
    scanf("%f", &raio);
    volume = malloc(sizeof(float));
    area = malloc(sizeof(float));
    calculo(raio, area, volume);
    printf("Area: %.2f\nVolume: %.2f", *area, *volume);
    free(volume);
    free(area);
    return 0;
}