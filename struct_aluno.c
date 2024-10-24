#include <stdio.h>
#include <stdlib.h>

typedef struct aluno Aluno;
struct aluno
{
    char nome[100];
    int idade, mat;
    float media;
};

Aluno *alocarVetorAlunos(int tam){
    Aluno *alunos;
    return alunos = (Aluno *) malloc(sizeof(Aluno) * tam);
}

void preencerAlunos(Aluno *alunos, int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("Nome: "); scanf("%s", alunos[i].nome);
        printf("Idade: "); scanf("%d", &alunos[i].idade);
        alunos[i].mat = rand() % 89 + 10;
        printf("Media: "); scanf("%f", &alunos[i].media);
    }
}

void mostrarAluno(Aluno *alunos, int p){
    printf("\nNome: %s\nMedia: %.2f\nIdade: %d\nMatricula: %d \n----------------", alunos[p].nome, alunos[p].media, alunos[p].idade, alunos[p].mat);
}

void mostrarTodosAlunos(Aluno *alunos, int t){
    for (int i = 0; i < t; i++)
        mostrarAluno(alunos, i);
}
int main()
{
    Aluno *alunos;
    int tam = 3;
    alunos = alocarVetorAlunos(tam);
    preencerAlunos(alunos, tam);
    mostrarTodosAlunos(alunos, tam);
    return 0;
}