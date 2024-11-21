typedef struct aluno Aluno;

struct aluno
{
    int matricula; //valor randomico de 100 ate 999 (este deve ser único para cada aluno)
    char *nome[100];
    float *notas[3]; // vetor para as notas dos alunos
    float media;
    Aluno *prox;
};

//criar a lista inical de alunos com valor NULL
Aluno *cria_aluno();

//liberar lista alocada
void liberar_aluno(Aluno *li);

//inserir alunos em ordem crescente pelo numero da matricula
Aluno *inserir_aluno_matricula(Aluno *li);

//mostrar todos os alunos
void mostrar_todos_aluno(Aluno *li);

//mostrar os dados de um unico aluno
void mostrar_unico_aluno(Aluno *li);

//buscar um determinado aluno e em seguida, imprimir seus dados (reutilizar as funcoes ja prontas)
Aluno *buscar_aluno(Aluno *li, int matricula);

//remover um aluno pela matricula (antes de remover, apresentar os dados do aluno que esta sendo revmoido, caso ele esteja presente na lista)
Aluno *remover_aluno(Aluno *li, int matricula);

// buscar aluno(s) por media (reutilizar as funcoes ja prontas)
Aluno *buscar_aluno_por_media(Aluno *li, float media);

//mostrar o aluno com maior media (reutilizar as funcoes ja prontas)
void mostrar_aluno_com_maior_media(Aluno *li);