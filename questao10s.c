/*
Elabore um algo que leia um TERNO DE NOTAS, bem como seu NOME e MATRICULA.
IMPRIMA as NOTAS E MÉDIA dos alunos com a informação de aprovado ou não(MEDIA>=7.0).
FINALIZE quando as notas lidas forem nulas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Aluno {
    char nome[50];
    double notas[3];
    double media;
} aluno;


int main(){
    int quantAlunos;
    printf("Quantos alunos serão avaliados? ");
    scanf("%d", &quantAlunos);

    for (int i = 0 ; i < quantAlunos ; i++){
        printf("Qual é o nome do %dº aluno? ", i+1);
        
        char nome[50];
        scanf("%c", &nome);

        double notas[3];

        for (int k = 0; k < 3; k++) {
            
            printf("Qual foi a nota de %s no semestre %d? ", nome, k+1);
            scanf("%lf", &notas[k]);
            
        }
        aluno x = {.nome = nome, .media = (notas[0] + notas[1] + notas[2])/3};

        printf("As notas do %dº aluno foram %.2lf, %.2lf, %.2lf e sua média foi %lf ", i, notas[0], notas[1], notas[2], x.media);

    }



    return 0;
}