#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

void Insertar(nodo *raiz, nodo *nuevo)
{
    if(raiz->iz == NULL && raiz->info < nuevo->info)
    {
        raiz->iz = nuevo;
        return;
    }
    if(raiz->de == NULL && raiz->info > nuevo->info)
    {
        raiz->de = nuevo;
        return;
    }

    if(raiz->iz->iz == NULL || raiz->iz->de == NULL)
        Insertar(raiz->iz, nuevo);
    else if(raiz->de->iz == NULL || raiz->de->de == NULL)
        Insertar(raiz->de, nuevo);
}
