#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto{
    float xa;
    float ya;
    float xb;
    float yb;
};

int main(int argc, char const *argv[]){
    struct Ponto p;
    scanf("%f", &p.xa);
    scanf("%f", &p.ya);
    scanf("%f", &p.xb);
    scanf("%f", &p.yb);
    printf("%.1f", sqrt(pow((p.xb - p.xa), 2) + pow((p.yb - p.ya), 2)));
    return 0;
}