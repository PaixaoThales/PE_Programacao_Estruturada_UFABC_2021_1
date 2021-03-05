#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("%d\n", (1/3 + 1/3 + 1/3) != 1);
    printf("%d\n", (0.1 + 0.7) != 0.8);
    printf("%d\n", 0.7 < 0.7);
    return 0;
}