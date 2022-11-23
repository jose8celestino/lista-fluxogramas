/*
Elabore um algoritmo que determine SE um numero inteiro é PAR OU ÍMPAR
FINALIZE QUANDO NUM == 0;
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    while (true){
        int x;

        printf("Insira um número positivo: ");
        scanf("%d", &x);
        if ((x == 0) || (x < 0)) {
            break;
        }
        else if (x % 2 == 0) {
            printf("%d é Par! \n", x);
        } else {
            printf("%d é Ímpar! \n", x);
        };
        }
    return 0;
}