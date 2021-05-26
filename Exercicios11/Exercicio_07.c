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

int buscaNaListaConteudo(Lista *li, int conteudo){
    int i = 0;
    if(li != NULL){
        while(i < li->qtd && li->num[i] != conteudo){
            i++;
        }
        if(i == li->qtd){
            return -1;
        }else{
            return i;
        }
    }else{
        return - 1;
    }
}

void trocaElementos(Lista *li, int elementoA, int elementoB){
    int x = buscaNaListaConteudo(li, elementoA), y = buscaNaListaConteudo(li, elementoB);
    if(x != -1 && y != -1){
        int aux = li->num[x];
        li->num[x] = li->num[y];
        li->num[y] = aux;
    }    
        
}

int main(int argc, char const *argv[]){
    int aux, x, y;
    Lista *lista = criaLista();
    for(int x = 0; x < TAM; x++){
        scanf("%d", &aux);
        insereNaLista(lista, aux);
    }
    scanf("%d", &x);
    scanf("%d", &y);
    trocaElementos(lista, x, y);
    for(int s = 0; s < TAM; s++){
        printf("%d ", lista->num[s]);
    }
    destroiLista(lista);
    return 0;
}
