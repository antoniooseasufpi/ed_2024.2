#include <stdlib.h>
#include <stdio.h>

#include "lista_dupla.h"

Lista *cria_lista(){
    return NULL;
}

Lista *inserir_elemento_inicio(Lista *li, int i){
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->ant = NULL;
    novo->prox = li;
    
    if (li != NULL)
        li->ant = novo;

    return novo;
}

void mostrar_lista(Lista *li){
    if (li == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    Lista *aux = li;
    while (aux != NULL) {
        if (aux->ant == NULL)
            printf("NULL <-");
        else
            printf(" %d <- ", aux->ant->info);
        
        printf(" %d ", aux->info);
        if (aux->prox == NULL)
            printf(" -> NULL");
        else
            printf(" -> %d", aux->prox->info);
        printf("\n");

        aux = aux->prox;
    }
    printf("\n");
}
