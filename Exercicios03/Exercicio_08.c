#include <stdio.h>
#include <stdlib.h>
#define tamanho 6

int procuraVetor(int vetor[], int procurado, int tam);

int procuraVetor(int vetor[], int procurado, int tam){
    for(int k = 0; k < tam; k++){
        if(vetor[k] == procurado){
            return vetor[k];
        }
    }
    return -1;
}
int main(int argc, char *argv[]){
    int vetor[tamanho];
    int verificados[tamanho];
    int auxiliar, cont = 0;
    for(int j = 0; j < tamanho; j++){
        scanf("%d", &vetor[j]);
    }
    for(int i = 0; i < tamanho; i++){
        auxiliar = procuraVetor(vetor, vetor[i], i);
        if(auxiliar != -1){
            cont += 1;
            printf("%d\n", auxiliar);
        }
    }
    if(cont == 0){
        printf("Nao existem valores iguais!");
    }
    /*
    #include <stdio.h>

    void main(){
        int num[6];
        int cont = 0, a = 0;
        for(int i = 0; i < 6; i++){
            scanf("%d", &num[i]);
        }
        for(int p = 0; p < 6; p++){
            cont = 0;
            for(int x = 0; x < p; x++){
            if(num[p] == num[x]){
                cont += 1;
            }
            }
            if(cont > 0 && cont < 2){
                printf("%d\n", num[p]);
            }else{
                a += 1;
            }
        }
        if(a == 6){
            printf("Nao existem valores iguais!");
        }
    }
    */
    return 0;
}