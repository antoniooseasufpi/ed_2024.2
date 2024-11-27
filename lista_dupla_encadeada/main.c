#include <stdlib.h>
#include <stdio.h>

#include "lista_dupla.h"

int main()
{
    Lista *li;
    li = cria_lista();
    li = inserir_elemento_lista_circular(li, 10);
    li = inserir_elemento_lista_circular(li, 12);
    li = inserir_elemento_lista_circular(li, 1);
    li = inserir_elemento_lista_circular(li, 5);
    li = inserir_elemento_lista_circular(li, 50);
    mostrar_lista_circular(li);
    
    return 0;
}
