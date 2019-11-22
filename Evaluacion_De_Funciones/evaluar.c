#include <stdio.h>
#include <stdlib.h>
#include "evaluacion.h"

float evaluar(nodo *head, float x)
{
    int i = 0;
    float suma = 1, evaluacion = 0;
    nodo *aux = head;
    while(aux != NULL)
    {
        if(aux->exponente > 0)
        {
            for(i = 0; i < aux->exponente; i++)
                suma *= x;
        }
        evaluacion += (aux->coeficiente)*suma;
        suma = 1;
        aux = aux->next;
    }
    return evaluacion;
}
