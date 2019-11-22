#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

//IMPRIME EN PREORDEN R-I-D
void Imprimir_preorden(nodo *raiz)
{
    printf("%i ",raiz->info);
    if(raiz->iz != NULL)
        Imprimir_preorden(raiz->iz);
    if(raiz->de != NULL)
        Imprimir_preorden(raiz->de);
}
//IMPRIME ENORDEN I-R-D
void Imprimir_enorden(nodo *raiz)
{
    if(raiz->iz != NULL)
        Imprimir_enorden(raiz->iz);
    printf("%i ",raiz->info);
    if(raiz->de !=NULL)
        Imprimir_enorden(raiz->de);
}
//IMPRIME EN POSTORDEN I-D-R
void Imprimir_postorden(nodo *raiz)
{
    if(raiz->iz != NULL)
        Imprimir_postorden(raiz->iz);
    if(raiz->de != NULL)
        Imprimir_postorden(raiz->de);
    printf("%i ",raiz->info);
}
