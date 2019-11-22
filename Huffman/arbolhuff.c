#include<stdio.h>
#include<stdlib.h>
#include "colas.h"

void crear_arbol(cola *frente)
{
    cola *arbol = (cola*)malloc(sizeof(cola));
    if(arbol == NULL)
        exit(1);

    if(frente->next != NULL)
    {
        arbol->frecuencia = frente->frecuencia + frente->next->frecuencia;
        arbol->caracter = -1;
        arbol->iz = frente;
        arbol->de = frente->next;
        arbol->next = NULL;
        frente = deque(frente);
        frente = deque(frente);
        frente = queue(frente, 1, 1, arbol);
    }

    Imprimir_preorden(frente);

}

//IMPRIME EN PREORDEN R-I-D
void Imprimir_preorden(cola *raiz)
{
    printf("%c - %i\n",raiz->caracter, raiz->frecuencia);

    if(raiz->iz != NULL)
        Imprimir_preorden(raiz->iz);

    if(raiz->de != NULL)
        Imprimir_preorden(raiz->de);
}
