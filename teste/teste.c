#include <stdio.h>

void main(){
    int num[10], a = 0, b = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &b);
        a = 0;
        for(int j = 0; j < i; j++){
            if(b == num[j]){
                a = a + 1;
                printf("Numero já digitado! Digite outro numero!\n");
                i = i - 1;
                break;
            }
        }
        if(a == 0){
            num[i] = b;
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", num[i]);
    }
}