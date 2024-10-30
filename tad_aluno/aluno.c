#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"

void cadastrarAluno(int *contador, Aluno *alunos){
    alunos = (Aluno *) realloc(alunos, sizeof(Aluno) * (*(contador) + 1));
    printf("Nome: "); scanf("%s", alunos[*(contador)].nome);
    printf("Idade: "); scanf("%d", &alunos[*(contador)].idade);
    alunos[*(contador)].matricula = rand() % 89 + 10;
    alunos[*(contador)].notas = cadastrarNotas();
    *(contador)++;
}

float *cadastrarNotas(){
    float *notas;
    notas = (float *) calloc(2, sizeof(float));
    for (int i = 0; i < 2; i++){
        printf("informe a nota %d ", i+1); 
        scanf("%f", &notas[i]);
    }
    return notas;
}

void mostrarAlunos(Aluno *alunos, int contador){
    printf("\n------------PRINT ALUNOS ----------- \n");
    for (int i = 0; i < contador; i++)
    {
        printf("\nNome: %s", alunos[i].nome);
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nIdade: %d", alunos[i].idade);
        printf("----Notas-----");
        for (int j = 0; j < 2; j++)
        {
            printf("%d - %.2f", j+1, alunos[i].notas[j]);
        }
    }
}
