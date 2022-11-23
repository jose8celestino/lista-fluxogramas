/*
Elabore um algoritmo que determine SE um numero inteiro é PAR OU ÍMPAR
FINALIZE QUANDO NUM == 0;
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Q {
    int value;
    bool par;
    bool impar;
};

int main(){
    while (true){
        int x;
        printf("Insira um número positivo: ");
        scanf("%d", &x);
        if (x == 0) {
            break;
        };

        struct Q num = {.value = x, .par = false, .impar = false};


        if (num.value % 2 == 0){
            num.par = true;
        } else {
            num.impar = true;
        }
        printf("%d, %d, %d\n", num.value, num.par, num.impar);
    }

    return 0;
}