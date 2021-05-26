#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char const *argv[]){
    int x, y, aux;
    Lista *lista1 = criaLista(), *lista2 = criaLista(), *lista3 = criaLista();
    scanf("%d", &x);
    for(int cont = 0; cont < x; cont++){
        scanf("%d", &aux);
        insereNaLista(lista1, aux);
    }
    scanf("%d", &y);
    for(int cont = 0; cont < y; cont++){
        scanf("%d", &aux);
        insereNaLista(lista2, aux);
    }
    Elemento *no = *lista1;
    for(int r = 0; r < (y + x); r++){
        if(r < x){          
            aux = no->numero;
            no = no->prox;
        }else if(r == x){
            no = *lista2;
            aux = no->numero;
            no = no->prox;
        }else{
            aux = no->numero;
            no = no->prox;
        }        
        insereNaLista(lista3, aux);
    }
    destroiLista(lista1);
    destroiLista(lista2);
    no = *lista3;
    for(int r = 0; r < (y + x); r++){
        printf("%d ", no->numero);
        no = no->prox;
    }
    destroiLista(lista3);
    return 0;
}