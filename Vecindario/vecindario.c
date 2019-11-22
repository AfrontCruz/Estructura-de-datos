#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

void Vecindario(nodo *a, int x, int rango)
{
    int i = 0;
    nodo *aux= malloc(sizeof(nodo));
    if(aux == NULL)
        exit(1);

    aux = a;

    while(a->sig != NULL)
    {
        if(a->info == x)
        {
            aux = a;
            break;
        }
        else
        {
            aux = a->sig;
        }
    }
    free(aux);
}
