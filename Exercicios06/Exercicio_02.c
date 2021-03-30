#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int x = 3;
    int y = 5;
    if(&x > &y){
        printf("A");
    }else{
        printf("B");
    }
    return 0;
}