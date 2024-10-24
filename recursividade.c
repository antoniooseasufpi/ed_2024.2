#include <stdlib.h>
#include <stdio.h>

int fatorial(int n) {
    if (n == 0)
        return 1;
    return n * fatorial(n - 1);
}


int somaVet(int *vet, int n) {
    if (n == 0)
        return 0;
    return vet[n - 1] + somaVet(vet, n - 1);
}
int main()
{   
    int vet[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Soma do vetor: %d\n", somaVet(vet, n));


    printf("Fatorial de 5: %d\n", fatorial(3));
    return 0;
}
