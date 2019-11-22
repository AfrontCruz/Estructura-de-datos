#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

void Borrar(nodo *raiz)
{
    if(raiz->iz != NULL)
        Borrar(raiz->iz);
    if(raiz->de != NULL)
        Borrar(raiz->de);
    free(raiz);
}
