// TAD para prover as assinaturas dos metodos e tipos da TAD Aluno

typedef struct aluno
{
    char nome[100];
    int idade, matricula;
    float *notas;
} Aluno;

Aluno *cadastrarAluno(int *contador, Aluno *alunos);
float *cadastrarNotas();
void mostrarAlunos(Aluno *alunos, int contador);

//implementar as seguintes funcoes
// - menu interativo
// - funcao de remover aluno, lembrando de sempre atualizar o contador, e antes de remover mostrar os dados do aluno
// - liberar toda a memoria
// - buscar um aluno pela matricula


