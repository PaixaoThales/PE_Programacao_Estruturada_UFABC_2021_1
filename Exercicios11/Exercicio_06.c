#include <stdio.h>
#include <stdlib.h>
#define TAM 5

struct elemento{
    int numero;
    struct elemento *prox;
};

typedef struct elemento Elemento;

typedef struct elemento* Lista;

Lista* criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

void destroiLista(Lista *li){
    if(li != NULL){
        Elemento *no;
        while((*li) != NULL){
            no = *li;
            *li = (*li) -> prox;
            free(no);
        }
        free(li);
    }
}

void insereNaLista(Lista *li, int n){
    if(li != NULL){
        Elemento *no;
        no = (Elemento*) malloc(sizeof(Elemento));
        if(no != NULL){
            no->numero = n;
            no->prox = NULL;
            if((*li) == NULL){
                *li = no;
            }else{
                Elemento *aux;
                aux = *li;
                while(aux->prox != NULL){
                    aux = aux->prox;        
                }
                aux->prox = no;
            }    
        }    
    }    
}

void removeDaLista(Lista *li, int qtd){
    if(li != NULL && *li != NULL){
        for(int x = 0; x < qtd; x++){
            Elemento *ant, *no = *li;
            while(no->prox != NULL){
                ant = no;
                no = no->prox;
            }
            if(no == (*li)){
                *li = no->prox;
            }else{
                ant->prox = no->prox;
            }
            free(no);
        }            
    }
}

int main(int argc, char const *argv[]){
    int aux, qtd;
    Lista *lista = criaLista();
    for(int cont = 0; cont < TAM; cont++){
        scanf("%d", &aux);
        insereNaLista(lista, aux);
    }
    scanf("%d", &qtd);
    removeDaLista(lista, qtd);
    Elemento *no = *lista;
    for(int r = 0; r < TAM - qtd; r++){
        printf("%d ", no->numero);
        no = no->prox;
    }
    destroiLista(lista);
    return 0;
}