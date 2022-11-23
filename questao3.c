/*
Leia números digitados e imprima a soma dos números finalizando quando número lido ==0
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int soma;
int x;

int main(){
    while (true){
        printf("Insira um número: ");
        scanf("%d", &x);

        if (x==0){
            printf("Soma dos números lidos = %d", soma);
            break;
        }
        soma += x;
    }
    

    return 0;
}