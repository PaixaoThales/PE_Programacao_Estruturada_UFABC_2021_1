#include <stdio.h>
#include <stdlib.h>

float fahrenheitParaCelsius(int c);  

float fahrenheitParaCelsius(int c){
    return  (float) (c - 32.0) * (5.0  / 9.0);
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    printf("%.2f\n", fahrenheitParaCelsius(n));
    return 0;
}