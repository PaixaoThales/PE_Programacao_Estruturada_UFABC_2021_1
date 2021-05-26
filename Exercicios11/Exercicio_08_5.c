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

int buscaNaListaConteudo(Lista *li, int conteudo){
    if(li == NULL){
        return -1;
    }
    Elemento *no = *li;
    int i = 1;
    while(no != NULL && no->numero != conteudo){
        no = no->prox;
        i++;
    }
    if(no == NULL){
        return -1;
    }else{
        return i;
    }
}

void trocaPosicao(Lista *li, int elementoA, int elementoB){
    int i = 0, aux = -1, x = buscaNaListaConteudo(li, elementoA), y = buscaNaListaConteudo(li, elementoB);
    if(x != -1 && y != -1){
        if(x < y){
            aux = y;
            y = x;
            x = aux;
        }
        Elemento *no = *li;
        while(i < x){
            no = no->prox;
            i++;
        }
        if(aux == -1){
            aux = no->numero;
            no->numero = elementoB;
        }else{
            aux =  no->numero;
            no->numero = elementoA;
        }
        while(x < y){
            no = no->prox;
            x++;
        }
        no->numero = aux; 
    }
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
    trocaPosicao(lista, x, y);
    Elemento *no = *lista;
    for(int r = 0; r < TAM; r++){
        printf("%d ", no->numero);
        no = no->prox;
    }
    destroiLista(lista);
    return 0;
}