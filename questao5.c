/*
Leia SEQUENCIA DE NUMEROS
imprima SOMA e PRODUTO dos numeros MAIORES QUE 2 e MENORES QUE 100, DIFERENTES DE 10, 20 e 32.
Finalize quando numero lido for 0
*/

#include <stdio.h>
#include <stdbool.h>
int x, soma, produto=1;

int main(){

    while (true) {
        printf("Insira um número: ");
        scanf("%d", &x);

        if (x==0){
            printf("Soma = %d", soma);
            printf("\nProduto =%d", produto);
            break;
        }
        else if (x>2 && x<100 && x!=10 && x!=20 && x!=32){
            soma += x;
            produto *= x;
        }
    }

    return 0;
}