#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int **alocarMatriz(int linhas, int colunas){
    int **mat;
    mat = (int **) calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++)
        mat[i] = (int *) calloc(colunas, sizeof(int));
    return mat;
}

void preencherMatriz(int **mat, int linhas, int colunas, int range){
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            mat[i][j] = rand() % range;
}

void mostrarMatriz(int **mat, int linhas, int colunas){
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

float distanciaEuclidiana(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void gerarCirculoInscrito(int **mat, int linhas, int colunas, int raio){
    int centroX = linhas / 2, centroY = colunas / 2;
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            if (distanciaEuclidiana(centroX, centroY, i, j) <= raio)
                mat[i][j] = 1;
}

int main(){
    int **mat, linha = 15, *repeticos;

    mat = alocarMatriz(linha, linha);
    mostrarMatriz(mat, linha, linha);



    gerarCirculoInscrito(mat, linha, linha, linha / 2);

    printf("\n\n");
    
    mostrarMatriz(mat, linha, linha);
    
    for (int i = 0; i < linha; i++)
        free(mat[i]);

    free(mat);
    
    return 0;
}