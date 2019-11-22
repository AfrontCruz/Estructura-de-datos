#include <stdio.h>
#include <stdlib.h>
#include "ColaDinamica.h"

cola Queue(cola a, int elem)
{
    nodo NuevoNodo = malloc(sizeof (nodo));
    if (NuevoNodo == NULL)
    {
        puts ("No se pudo reservar memoria");
        exit(1);
    }

    NuevoNodo->info = elem;
    NuevoNodo->siguiente = NULL;
    if(a->tam == 0)
    {
        a->tope = NuevoNodo;
        a->frente = a->tope;
    }
    else
    {
        a->tope->siguiente = NuevoNodo;
        a->tope = NuevoNodo;
    }
    a->tam ++;

    return a;
}
