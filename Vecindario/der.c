#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

void Vecindario(nodo *a, int i)
{
    nodo *aux, *aux1;
    int j,k = 0;
    aux = a;
    aux1 = a;

    while(k<i)
    {
        k++;
        if(aux->ant == NULL)
            break;
        aux = aux->ant;
    }
    while(aux != a)
    {
        if(aux->ant == NULL)
        {

        }
        else
        {
            printf("%i - ",aux->info);

        }
        aux = aux->sig;
    }

    printf("%i - ",a->info);

    while(j < i)
    {
        j++;
        if(aux1->sig == NULL);
        else
        {
            aux1 = aux1->sig;
            printf("%i - ",aux1->info);
        }

    }
    printf("END\n");
}
