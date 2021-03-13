#include <stdio.h>
#include <stdlib.h>

struct Atleta{
    char nome[20];
    int idade;
    float altura;
};

void ordena(int a, int b, int c, int d);

void ordena(int a, int b, int c, int d){
    int vetor[4] = {a, b, c, d};
    for (int x = 1; x < 4; x++){
        for(int y = 0; y < 3 ; y++){
            if(vetor[y] < vetor[y + 1]){
                int aux = vetor[y];
                vetor[y] = vetor[y + 1];
                vetor[y + 1] = aux;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        printf("%d ", vetor[i]);
    }
}

int main(int argc, char const *argv[]){
    struct Atleta atleta1;
    struct Atleta atleta2;
    struct Atleta atleta3;
    struct Atleta atleta4;
    scanf("%s", &atleta1.nome);
    scanf("%d", &atleta1.idade);
    scanf("%f", &atleta1.altura);
    scanf("%s", &atleta2.nome);
    scanf("%d", &atleta2.idade);
    scanf("%f", &atleta2.altura);
    scanf("%s", &atleta3.nome);
    scanf("%d", &atleta3.idade);
    scanf("%f", &atleta3.altura);
    scanf("%s", &atleta4.nome);
    scanf("%d", &atleta4.idade);
    scanf("%f", &atleta4.altura);
    ordena(atleta1.idade, atleta2.idade, atleta3.idade, atleta4.idade);
    return 0;
}