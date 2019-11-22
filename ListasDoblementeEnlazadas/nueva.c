#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

nodo *NuevoLista(void)
{
    nodo *a = malloc(sizeof(nodo));
    if(a == NULL)
        exit(1);

    a->sig = NULL;
    a->ant = NULL;

    return a;
}
