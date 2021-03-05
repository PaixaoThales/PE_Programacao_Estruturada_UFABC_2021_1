#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void imprime(char *s);

void imprime(char *s){
    while(*s != '\0'){
        putchar(*s++);
    }
}

int main(int argc, char const *argv[]){
    setlocale(LC_ALL, "");
    int *x, valor, y;
    valor = 35; 
    x = &valor; // Atribuindo o endereço do valor a x;
    y = *x; // Atribuindo o conteúdo da variável apontada por x a y;
    printf("Endereço da variável comum valor: %p\n", &valor);
    printf("Lendo o conteúdo do ponteiro x: %p\n", x);
    printf("Endereço da variável ponteiro x: %p\n", &x);
    printf("Conteúdo da variável apontada por x: %d\n", *x);
    printf("Conteúdo da variável comum y: %d\n", y);

    int a[] = {2017, 2018, 2019};
    for(int i = 0; i < 3; i++){
        printf("%d\n", *a + i);
    }
    printf("%p\n", a);

    char *h = "texto";
    puts(h);

    char s[] = "thales";
    char *t = "thales";
    char u[] = {0x74, 0x68, 0x61, 0x6c, 0x65, 0x73, 0x00}; 
    puts(s);
    puts(t);
    puts(u);

    printf("\n");
    imprime(s);

    printf("\n");
    char *w = "thales\n";
    w++;
    w++;    
    putchar(*w);

    void *p = NULL;
    printf("\n%zu\n", sizeof p);

    int *j = NULL;
    j = malloc(sizeof (int));
    *j = 9;
    printf("j: %d\n", *j);
    free(j);
    return 0;
}
