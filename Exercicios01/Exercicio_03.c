#include <stdio.h> 
#include <stdlib.h>

int main(){
    int alunos, alunas;
    scanf("%d", &alunas);
    scanf("%d", &alunos);
    if(alunas > alunos){
        printf("Quantidade de alunas eh maior do que de alunos!\n");
    }else if(alunos > alunas){
        printf("Quantidade de alunos eh maior do que de alunas!");
    }else{
        printf("Mesma quantidade!");
    }

    return 0;
}