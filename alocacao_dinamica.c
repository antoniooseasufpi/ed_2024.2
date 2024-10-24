// o algoritmo devera ler do usuario o tamanho do vetor
// calcular o menor e o maior valor
// mostrar o vetor lido e os respectivos maior e menor valor

#include <stdlib.h>
#include <stdio.h>

int main(){

    int tamanho, *vetor, menor, maior;

    printf("Informe o tamanho do vetor ");
    scanf("%d", &tamanho);

    //alocar a memoria necessaria
    vetor = (int *) calloc(tamanho, sizeof(int));

    if (!vetor){
        printf("Alocacao falhou pouca memoia \n");
        exit(1);
    }

    printf("o tipo int ocupada %d bytes \n", (int)sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("informe o valor da posicao %d ", i);
        scanf("%d", &vetor[i]);
    }

    menor = maior = vetor[0];

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] < menor )
            menor = vetor[i];
        if (vetor[i] > maior )
            maior = vetor[i];
        
        printf("P-> %d : V-> %d \n", i, vetor[i]);
    }

    printf("\n maior: %d | menor: %d ", maior, menor);

    //liberar memoria alocada
    free(vetor);

    return 0; // exit codes table
}