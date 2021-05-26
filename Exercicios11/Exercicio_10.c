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

void insereNoInicioLista(Lista *li, int n){
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
void insereNaLista(Lista *li){
    int aux;
    for(int cont = 0; cont < TAM; cont++){
        scanf("%d", &aux);
        insereNoInicioLista(li, aux);
    }
}

int buscaLista(Lista *lista1, Lista *lista2){
    Elemento *no1 = *lista1;
    Elemento *no2 = *lista2;
    for(int x = 0; x < TAM; x++){
        if(no1->numero != no2->numero){
            return 0;
        }
        no2 = no2->prox;
        no1 = no1->prox;
    }
    return 1;
}

int main(int argc, char const *argv[]){
    Lista *lista1 = criaLista(), lista2 = criaLista();
    insereNaLista(lista1);
    insereNaLista(lista2);
    if(buscaLista(lista1, lista2) == 0){
        printf("Diferentes!");
    }else{
        printf("Iguais!");
    }    
    destroiLista(lista1);
    destroiLista(lista2);
    return 0;
}