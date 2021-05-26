#include <stdio.h>
#include <stdlib.h>
#define TAM 5

struct lista{
    int qtd;
    int num[TAM];
};

typedef struct lista Lista;

Lista *criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        li -> qtd = 0;
    }
    return li;
}

void destroiLista(Lista *li){
    free(li);
}

void insereNaLista(Lista *li, int n){
    if(li != NULL){
        if(li -> qtd != TAM){
            li -> num[li->qtd] = n;
            li -> qtd++;
        }
    }
}

void removeDaLista(Lista *li, int qtd){
    if(li != NULL){
        if(li->qtd >= qtd){
            for(int i = 0; i < qtd; i++){
                for(int k = 0; k < li->qtd - 1;k++){
                    li->num[k] = li->num[k + 1];
                }
                li->qtd--;
            }
        }
    }
}

int main(int argc, char const *argv[]){
    int aux, qtd;
    Lista *lista = criaLista();
    for(int x = 0; x < TAM; x++){
        scanf("%d", &aux);
        insereNaLista(lista, aux);
    }
    scanf("%d", &qtd);
    removeDaLista(lista, qtd);
    for(int s = 0; s < TAM - qtd; s++){
        printf("%d ", lista->num[s]);
    }
    destroiLista(lista);
    return 0;
}
