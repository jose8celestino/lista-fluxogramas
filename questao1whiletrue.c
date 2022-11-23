/*
Elabore algo que leia sequencia de numeros 
informe se o número lido é maior que 100, menor que 10 ou igual à 20, 30, ou 40.
Finalize quando o número lido for igual à 0 e informe a quantidade de números lidos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int c;
int main(){
    while (true){
        int x;
        printf("Insira um número: ");
        scanf("%d", &x);
        if (x == 0){
            printf("%d números foram lidos", c);
            break;
        } 
        else {
            c+=1;

            if (x>100){
                printf("%d é maior do que 100!\n", x);
            }
            if (x < 10){
                printf("%d é menor do que 10!\n", x);
            }
            if ((x==20) || (x==30) || (x==40)){
                printf("%d é igual a 20 ou 30 ou 40!\n", x);
            }

        }
    }
    return 0;
}