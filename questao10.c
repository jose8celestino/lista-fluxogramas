/*
Elabore um algo que leia um TERNO DE NOTAS, bem como seu NOME e MATRICULA.
IMPRIMA as NOTAS E MÉDIA dos alunos com a informação de aprovado ou não(MEDIA>=7.0).
FINALIZE quando as notas lidas forem nulas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    
        printf("Insira o nome do aluno: ");
        char nome[50];
        scanf("%s", &nome);
        double n1,n2,n3;
        

        printf("Insira as 3 notas do aluno: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        double media = (n1+n2+n3)/3;

        if (media >= 7.0){
            printf("O aluno %s teve notas %lf, %lf e %lf; Foi aprovado com média %lf", nome, n1,n2,n3,media);
        }
        else {
            printf("O aluno %s teve notas %lf, %lf e %lf; Foi reprovado com média %lf", nome, n1,n2,n3,media);
        }
    
    return 0;
}