#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int ra;
    char nome[20];
    float nota1;
    float nota2;
    float nota3;
};

void printAluno(struct Aluno aluno);
struct Aluno maiorMedia(struct Aluno aluno1, struct Aluno aluno2);

void printAluno(struct Aluno aluno){
    printf("%d\n%s\n%.1f\n%.1f\n%.1f", aluno.ra, aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3);
}

struct Aluno maiorMedia(struct Aluno aluno1, struct Aluno aluno2){
    float nota1 = (float) (aluno1.nota1 + aluno1.nota2 + aluno1.nota3) / 3;
    float nota2 = (float) (aluno2.nota1 + aluno2.nota2 + aluno2.nota3) / 3;
    if(nota1 > nota2){
        return aluno1;
    }else{
        return aluno2;
    }
}

int main(int argc, char const *argv[]){
    struct Aluno aluno1;
    struct Aluno aluno2;
    struct Aluno aluno3;
    struct Aluno aluno4;
    scanf("%d", &aluno1.ra);
    scanf("%s", &aluno1.nome);
    scanf("%f", &aluno1.nota1);
    scanf("%f", &aluno1.nota2);
    scanf("%f", &aluno1.nota3);
    scanf("%d", &aluno2.ra);
    scanf("%s", &aluno2.nome);
    scanf("%f", &aluno2.nota1);
    scanf("%f", &aluno2.nota2);
    scanf("%f", &aluno2.nota3);
    scanf("%d", &aluno3.ra);
    scanf("%s", &aluno3.nome);
    scanf("%f", &aluno3.nota1);
    scanf("%f", &aluno3.nota2);
    scanf("%f", &aluno3.nota3);
    scanf("%d", &aluno4.ra);
    scanf("%s", &aluno4.nome);
    scanf("%f", &aluno4.nota1);
    scanf("%f", &aluno4.nota2);
    scanf("%f", &aluno4.nota3);
    printAluno(maiorMedia(aluno1, maiorMedia(aluno2, maiorMedia(aluno3, aluno4))));
    return 0;
}