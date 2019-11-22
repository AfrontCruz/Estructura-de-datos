#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

void borrarLista(nodo *a, int elem)
{
    if(a != NULL)
    {
        if(a->info == elem)
        {
            a->ant->sig = a->sig;
            a->sig->ant = a->ant;
            free(a);
            printf("\n\nEl el elemento %i se borro con exito\n\n",elem);
            return;
        }

        borrarLista(a->sig, elem);
    }
    else
    {
        printf("\n\nEl elemento %i no se encuentra en la lista\n\n",elem);
    }
}
