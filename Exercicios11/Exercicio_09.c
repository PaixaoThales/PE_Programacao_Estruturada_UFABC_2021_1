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

void verificaNum(Lista *li){ 
    Elemento *no = *li;
    int pares = 0, maior = no->numero, posicaoMaior = 0, soma = 0;
    float media;
    for(int x = 0; x < TAM; x++){
        if(no->numero % 2 == 0){
            pares += 1;
        }
        if(maior < no->numero){
            maior = no->numero;
            posicaoMaior = x;
        }
        soma += no->numero;      
        no = no->prox;        
    }
    media = (float) soma / TAM;
    printf("a) Qtd. pares: %d\nb) Media: %.2f\nc) Maior: %d\nd) Posicao (Maior): %d\ne) Soma: %d", pares, media, maior, posicaoMaior, soma);
}

int main(int argc, char const *argv[]){
    int aux;
    Lista *lista = criaLista();
    for(int cont = 0; cont < TAM; cont++){
        scanf("%d", &aux);
        insereNaLista(lista, aux);
    }
    verificaNum(lista);
    destroiLista(lista);
    return 0;
}