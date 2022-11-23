/*
Elabore um fluxograma que leia uma sequência de números finalizando o processo quando o número lido
for 99, 0 ou 14
ao finalizar imprima:
a. a soma dos números lidos menores que 150 e maiores que 50
b. o produto de números que sejam concomitantemente diferentes de 10, maiores do que 5 e menores que 70.
c. a média dos numeros lidos,.

else if só executa quando nenhuma das condições anteriores são atendidas.
nesse exemplo, não é interessante colocar else if pois mais de uma condicao pode ser verdadeira
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int contador;
int soma;
int acumulador;
int produto = 1;

int x;

int main(){
    while (true){
        printf("Insira um número: ");
        scanf("%d", &x);

        if ((x == 0)||(x == 14)||(x == 99)){
            double media = acumulador/contador;
            printf("%d", acumulador);
            printf("soma = %d, produto = %d, média = %.2lf, números lidos = %d", soma, produto, media, contador); 
            break;
        }
        else{
            if ((x<150) && (x>50)){
                soma+=x;
            }
            if ((x!=10) && (x>5)&& (x<70)){
                produto *= x;
            }
            acumulador += x;
            contador +=1;
        }
        

    }


    return 0;
}