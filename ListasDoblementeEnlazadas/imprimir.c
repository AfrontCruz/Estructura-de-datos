#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

void despliegaLista(nodo *a)
{
    if(a != NULL)
    {
        printf("%i - ",a->info);
        despliegaLista(a->sig);
        return;
    }

    printf("END\n");
}
