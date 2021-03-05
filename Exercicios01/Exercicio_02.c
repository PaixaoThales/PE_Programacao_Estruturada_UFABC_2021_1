#include <stdio.h> 
#include <stdlib.h>

int main(){
    int sony, dell, toshiba;
    scanf("%d", &sony);
    scanf("%d", &dell);
    scanf("%d", &toshiba);
    printf("%d notebook(s) da Sony\n", sony);
    printf("%d notebook(s) da Dell\n", dell);
    printf("%d notebook(s) da Toshiba\n", toshiba);
    printf("Total de %d notebooks\n", sony + dell + toshiba);

    return 0;
}