#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"
#include <math.h>

int no_nodos = 0;
int suma3 = 0;

void gestor(nodo *raiz)
{
    contador(raiz);
    no_hojas();
    multiplos(raiz);
    printf("\n\nLa suma de los multiplos es: %i\n\n", suma3);
}

void contador(nodo *raiz)
{
    if(raiz->de == NULL && raiz->iz == NULL)
        no_nodos++;
    if(raiz->iz != NULL)
        contador(raiz->iz);
    if(raiz->de != NULL)
        contador(raiz->de);
}

void no_hojas()
{
    printf("Hay %i hojas",no_nodos);
}

void multiplos(nodo *raiz)
{
    if(raiz->info%3 == 0)
        suma3 += raiz->info;

    if(raiz->iz != NULL)
        multiplos(raiz->iz);
    if(raiz->de != NULL)
        multiplos(raiz->de);
}
