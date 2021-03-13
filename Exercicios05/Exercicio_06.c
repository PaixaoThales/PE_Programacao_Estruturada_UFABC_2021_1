#include <stdio.h>
#include <stdlib.h>

enum Semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main(int argc, char const *argv[]){
    enum Semana dias;
    scanf("%d", &dias);
    switch(dias){
    case Domingo:
        printf("Domingo");
        break;
    case Segunda:
        printf("Segunda");
        break;
    case Terca:
        printf("Terca");
        break;
    case Quarta:
        printf("Quarta");
        break;
    case Quinta:
        printf("Quinta");
        break;
    case Sexta:
        printf("Sexta");
        break;
    case Sabado:
        printf("Sabado");
        break;
    }
   return 0;
}
