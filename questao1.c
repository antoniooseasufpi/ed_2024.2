#include <stdlib.h>
#include <stdio.h>

int *obtem_produtos_zerados(int *codigos, int *estoque, int num_prod, int *cont){
	
	int cods_podutos_zerados[100];
	
	for (int i = 0; i < num_prod; i++)
	{
		if (estoque[codigos[i]] == 0)
		{
			cods_podutos_zerados[*cont] = codigos[i];
			*cont = *cont + 1;
		}
	}
	
	return cods_podutos_zerados;
}
int main(int argc, char const *argv[])
{
	int *aux_cods, codigos[100], estoque[100], cont = 0, num_prod = 100;
	
	// inserir -1 em todos as posicoes do estoque
	for (int i = 0; i < 100; i++)
		estoque[i] = -1;
	
	for (int i = 0; i < 100; i++)
	{
		codigos[i] = rand() % 100;
		
		estoque[codigos[i]] = rand() % 10;
	}

	aux_cods = obtem_produtos_zerados(codigos, estoque, num_prod, &cont);


	for (int i = 0; i < cont; i++)
	{
		printf("Codigo do produto: %d Estoque %d \n", aux_cods[i], estoque[aux_cods[i]]);
	}
	return 0;
}