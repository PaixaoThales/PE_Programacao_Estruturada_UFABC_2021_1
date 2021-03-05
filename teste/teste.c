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
