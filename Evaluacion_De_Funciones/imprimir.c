#include <stdio.h>
#include <stdlib.h>
#include "evaluacion.h"

void imprimir(nodo *head, float resultado)
{
    nodo *aux = head;
    while(aux != NULL)
    {
        printf("%ix^%i ",aux->coeficiente, aux->exponente);
        aux = aux->next;
    }
    printf("\n\nEl resultado de evaluar la funcion es: %0.3f", resultado);
}
