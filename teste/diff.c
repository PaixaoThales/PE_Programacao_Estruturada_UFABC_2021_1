#include <stdio.h>
#include <stdlib.h>

int lcslength(char * A, char * B);

int lcslength(char * A, char * B){
    if(*A == '\0' || *B == '\0'){
        return 0;
    }else if(*A == *B){
        return 1 + lcslength(A + 1, B + 1);
    }else{
        return max(lcslength(A + 1, B), lcslength(A, B + 1));
    }
}

int main(int argc, char const *argv[]){
    int n = lcslength('ba', 'faba');
    printf("%d", n);
    return 0;
}