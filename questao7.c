/*
Elabore um alho que leia uma sequencia de números que serão os coeficientes de uma eq de 2gundo grau
Com base nisso, determine as raízes da equação e a soma das duas raìzes se elas forem iguais
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

double a,b,c;
int main(){
    printf("Insira os coeficientes de uma equação de segundo grau: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a != 0){
        double d = pow(b, 2) - 4*a*c;
        printf("%lf", d);

        if(d < 0){
            printf("A equação não tem raízes reais!");
        }
        if (d > 0) {
            double x1, x2;
            x1 = (-b + sqrt(d))/2*a;
            x2 = (-b - sqrt(d))/2*a;
            printf("As raízes da equação são %.2lf e %.2lf", x1, x2);
        }
        if (d==0){
            double x0;
            x0 = (-b / 2*a);
            printf("As soma das raízes iguais da equação é %.2lf", x0);
        }
    }
    return 0;
}