#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Aluno *alunos = NULL;
    int contador = 0;
    cadastrarAluno(&contador, alunos);
    cadastrarAluno(&contador, alunos);
    cadastrarAluno(&contador, alunos);

    mostrarAlunos(alunos, contador);

    return 0;
}