#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

nodo *Crear(int elem)
{
    nodo *Nuevo = (nodo*)malloc(sizeof(nodo));
    if(Nuevo == NULL)
        exit(1);
    Nuevo->de = NULL;
    Nuevo->iz = NULL;
    Nuevo->info = elem;

    return Nuevo;
}
