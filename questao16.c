/*
Elabore um algo que DETERMINE O MAIOR DOS NÚMEROS LIDOS e FINALIZE quando NUM = 0;
*/

#include <stdio.h>
#include <stdbool.h>

int maior;

int main(){
    do {
        int num;

        printf("Insira um número (O algoritmo finaliza quando o numero lido for nulo): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("%d foi o maior número lido.", maior);
            break;
        }
        if (num > maior) {
            maior = num;
        }


    } while (true);

    return 0;
}