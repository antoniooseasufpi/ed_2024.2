#include <stdlib.h>
#include <stdio.h>

#include "lista_dupla.h"

int main()
{
    Lista *li;
    li = cria_lista();
    li = inserir_elemento(li, 10);
    li = inserir_elemento(li, 12);
    li = inserir_elemento(li, 1);
    li = inserir_elemento(li, 5);
    li = inserir_elemento(li, 50);
    mostrar_lista(li);
    return 0;
}
