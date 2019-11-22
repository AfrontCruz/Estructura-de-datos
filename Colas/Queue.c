#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

cola *Queue(cola *a, int elem)
{
    int aux = Llena(a);
    if (aux == 1)
    {
        printf("\nLa cola esta llena\n\a");
    }

    else
    {
        a->vector[(a->fin)%(a->tam)] = elem;
        a->fin ++;
        a->tam --;
    }

    return a;
}
