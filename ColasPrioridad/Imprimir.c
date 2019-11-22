#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

void *imprimir(cola *a)
{
    printf("\n");
    for (int i = a->frente; i < a->fin; i++)
    {
        printf(" %i, ",a->vector[i]);
    }
}
