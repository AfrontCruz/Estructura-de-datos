#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

void Insertar(lista a, int elem)
{
    nodo Nuevo = (nodo)malloc(sizeof(nodo));
    if(Nuevo == NULL)
        exit(1);

    Nuevo->info = elem;
    Nuevo->sig = NULL;

    if(a->tam == 0)
        a->frente = Nuevo;

    else
        Orden(a->frente, Nuevo);

    a->tam ++;
    return;
}
