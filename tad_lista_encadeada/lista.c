#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista *cria_lista(){
    return NULL;
}

void libera_lista(Lista *li){
    Lista *aux;
    while(li != NULL){
        aux = li;
        li = li->prox;
        free(aux);
    }
}

Lista *insere_lista_inicio(Lista *li, int i){
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = li;
    return novo;
}

void mostrar_lista(Lista *li){
    Lista *aux = li;
    while(aux != NULL){
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
}
