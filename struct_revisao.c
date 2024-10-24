#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario Funcionario;
struct funcionario
{
    char nome[100];
    float salario;
    int idade;
};

int main()
{
    int tam_vet_funcionarios = 0, op, maior_salario = -9999, posicao_maior_salario = 0;
    Funcionario *vet_funcionarios;

    //alocar vet_funcionarios para tam_vet_funcionarios
    vet_funcionarios = (Funcionario *) malloc(sizeof(Funcionario));

    //ler o primeiro dado do funcionario
    do
    {
        printf("Informe o nome ");
        scanf("%s", vet_funcionarios[tam_vet_funcionarios].nome);
        printf("Informe a idade ");
        scanf("%d", &vet_funcionarios[tam_vet_funcionarios].idade);
        printf("Informe o salario ");
        scanf("%f", &vet_funcionarios[tam_vet_funcionarios].salario);

        //verificar o maior salario
        if (maior_salario < vet_funcionarios[tam_vet_funcionarios].salario){
            maior_salario = vet_funcionarios[tam_vet_funcionarios].salario;
            posicao_maior_salario = tam_vet_funcionarios;
        }
        
        printf("\nDeseja inserir mais funcionarios? informe -1 para sair ou qq outro valor inteiro para continuar");
        scanf("%d", &op);
        if (op != -1)
            //incrementa o qtd de funcionarios no vetor
            tam_vet_funcionarios++;
            vet_funcionarios = (Funcionario *) realloc(vet_funcionarios, sizeof(Funcionario) * (tam_vet_funcionarios + 1));
    } while (op != -1);
    
    printf("\n-----DADOS DO FUNCIONARIO COM MAIOR SALARIO -------\n");

    printf("Nome: %s \nIdade: %d\nSalario %.2f\n",vet_funcionarios[posicao_maior_salario].nome, vet_funcionarios[posicao_maior_salario].idade, vet_funcionarios[posicao_maior_salario].salario);
            
    return 0;
}
