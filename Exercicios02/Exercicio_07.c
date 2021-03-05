#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int c, l = 1, n = 1;
    scanf("%d", &c);
    for(int i = 0; c > i; i++){
        for(int j = 0; l > j; j++){
            printf("%d ", n);
            n += 1;
        }
        l += 1;
        printf("\n");
    }
    return 0;
}
