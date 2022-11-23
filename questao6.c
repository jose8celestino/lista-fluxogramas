/*
elabore um algoritmo que LEIA TODOS OS NÚMEROS DIGITADOS e IMPRIMA  a SOMA DE TODOS. 
CONDIÇÃO DE PARADA ==> Num Lido = 0.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int x;
int sum = 0;

int main(){
    while (true){
        printf("Insira um número: ");
        scanf("%d", &x);

        if (x == 0){
            printf("\nA soma dos números lidos é %d", sum);
            break;
        };

        sum += x;
    }

    return 0;
}