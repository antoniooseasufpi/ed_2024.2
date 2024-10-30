// TAD para prover as assinaturas dos metodos e tipos da TAD Aluno

typedef struct aluno
{
    char nome[100];
    int idade, matricula;
    float *notas;
} Aluno;

void cadastrarAluno(int *contador, Aluno *alunos);
float *cadastrarNotas();
void mostrarAlunos(Aluno *alunos, int contador);

