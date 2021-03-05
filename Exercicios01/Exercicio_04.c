#include <stdio.h> 
#include <stdlib.h>

int main(){
    float baseA, alturaA, baseB, alturaB;
    
    scanf("%f", &baseA);
    scanf("%f", &alturaA);
    scanf("%f", &baseB);
    scanf("%f", &alturaB);
    if((baseA == alturaA) || (baseB == alturaB)){
        printf("Os dados informados nao formam o retangulo A ou o retangulo B!\n");
    }else{
        float areaA, areaB;
        areaA = baseA * alturaA;
        areaB = baseB * alturaB;
        printf("A area do retangulo A eh: %f\n", areaA);
        printf("A area do retangulo B eh: %f\n", areaB);
        if(areaA < areaB){
            printf("A area do retangulo B eh maior do que a do retangulo A!\n");
        }else if(areaA > areaB){
            printf("A area do retangulo A eh maior do que a do retangulo B!\n");
        }else{
            printf("A area do retangulo A eh igual ao do retangulo B!\n");
        }
    }

    return 0;
}