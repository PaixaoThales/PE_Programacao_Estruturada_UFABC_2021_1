#include <stdio.h>
#include <stdlib.h>
#define TAM 20

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

void insereLista(Lista *li, int n){
    if(li != NULL){
        if(li -> qtd != TAM){
            li -> num[li->qtd] = n;
            li -> qtd++;
        }
    }
}

int main(int argc, char const *argv[]){
    int x, y, aux;
    Lista *lista1 = criaLista(), *lista2 = criaLista(), *lista3 = criaLista();
    scanf("%d", &x);
    for(int c = 0; c < x; c++){
        scanf("%d", &aux);
        insereLista(lista1, aux);
    }
    scanf("%d", &y);
    for(int i = 0; i < y; i++){
        scanf("%d", &aux);
        insereLista(lista2, aux);
    }
    for(int r = 0; r < (y + x); r++){
        if(r < x){
            aux = lista1->num[r];
        }else{
            aux = lista2->num[r - x];
        }        
        insereLista(lista3, aux);
    }
    destroiLista(lista1);
    destroiLista(lista2);
    for(int s = 0; s < (y + x); s++){
        printf("%d ", lista3->num[s]);
    }
    destroiLista(lista3);
    return 0;
}
