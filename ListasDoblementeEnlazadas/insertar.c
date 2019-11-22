#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

void InsertarLista(nodo *a, int elem)
{
    if(a->sig != NULL)
    {
        InsertarLista(a->sig, elem);
        return;
    }

    nodo *Nuevo = malloc(sizeof(nodo));
    if (Nuevo == NULL)
        exit(0);

    Nuevo->ant = a;
    Nuevo->info = elem;
    Nuevo->sig = NULL;
    a->sig = Nuevo;
}
