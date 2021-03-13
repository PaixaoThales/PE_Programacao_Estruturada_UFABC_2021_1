#include <stdio.h>
#include <stdlib.h>

struct Atleta{
    char nome[20];
    int idade;
    float altura;
};

void printAtleta(struct Atleta atleta, char mensagem[10]);
struct Atleta maiorIdade(struct Atleta atleta1, struct Atleta atleta2);
struct Atleta maiorAltura(struct Atleta atleta1, struct Atleta atleta2);

void printAtleta(struct Atleta atleta, char mensagem[10]){
    printf("Mais %s: %s\n", mensagem, atleta.nome);
}

struct Atleta maiorIdade(struct Atleta atleta1, struct Atleta atleta2){
    if(atleta1.idade > atleta2.idade){
        return atleta1;
    }else{
        return atleta2;
    }
}

struct Atleta maiorAltura(struct Atleta atleta1, struct Atleta atleta2){
    if(atleta1.altura > atleta2.altura){
        return atleta1;
    }else{
        return atleta2;
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
    printAtleta(maiorAltura(atleta1, maiorAltura(atleta2, maiorAltura(atleta3, atleta4))), "alto");
    printAtleta(maiorIdade(atleta1, maiorIdade(atleta2, maiorIdade(atleta3, atleta4))), "velho");
    return 0;
}