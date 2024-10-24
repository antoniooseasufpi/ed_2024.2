#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void teste_pointer(int *a, int *b, int *c) {
    printf("informe um valor para A");
    scanf("%d", a);
    printf("informe um valor para B");
    scanf("%d", b);
    printf("informe um valor para C");
    scanf("%d", c);
}
void print_vetor(float *vet, int t){
    for (int i = 0; i < t; i++)
        printf("%.1f", vet[i]);
}
//preencher vetor
void preencher_vetor(float *vet, int t){
    for (int i = 0; i < t; i++)
        vet[i] = rand() % 100;
}

float media(int t, float *v){
    float soma = 0;
    for (int i =0; i < t; i++)
        soma += v[i];
    return soma / t;
}

float variancia(int n, float *v, float media){
    float soma = 0;
    // calculamos o somatorio do quadrado da difference entre o elemtno e a media
    for (int i = 0; i < n; i++){
        soma += pow((v[i] - media), 2);
        
    }
    // dividir por n -1
    return soma / (n - 1);
}

int main() {
    int x, y, z, t = 100; 
    float vet[100], m;
    preencher_vetor(vet, t);
    
    m = media(t, vet);

    printf("Media: %.2f\n", m);
    printf("Variancia: %.2f", variancia(t, vet, m));

    
    //print_vetor(vet, 100);

    

    // teste_pointer(&x, &y, &z);

    // printf("%d - %d - %d", x, y, z);

    return 0;
}