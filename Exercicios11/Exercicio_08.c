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

void trocaPosicao(Lista *li, int elementoA, int elementoB){
    int i = 0, auxA, auxB;
    if(elementoA > elementoB){
        int aux = elementoB;
        elementoB = elementoA;
        elementoA = aux;
    }
    Elemento *no = *li;
    while(i < elementoB){
        if(i == elementoA){
            auxA = no->numero;
        }
        no = no->prox;     
        i++;
    }
    auxB = no->numero;
    no->numero = auxA;   
    no = *li; 
    i = 0;
    while(i < elementoA){
        no = no->prox;
        i++;
    }
    no->numero = auxB;
}

int main(int argc, char const *argv[]){
    int aux, x, y;
    Lista *lista = criaLista();
    for(int cont = 0; cont < TAM; cont++){
        scanf("%d", &aux);
        insereNaLista(lista, aux);
    }
    scanf("%d", &x);
    scanf("%d", &y);
    trocaPosicao(lista, x - 1, y - 1);
    Elemento *no = *lista;
    for(int r = 0; r < TAM; r++){
        printf("%d ", no->numero);
        no = no->prox;
    }
    destroiLista(lista);
    return 0;
}