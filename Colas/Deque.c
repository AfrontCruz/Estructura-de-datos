#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

cola *Deque(cola *a)
{
    int aux = Vacia(a);
    if (aux == 1)
    {
        printf("\nLa cola esta vacia, no se puede hacer Deque\n\n\a");
    }

    else
    {
            printf("\nEl elemento que descolamos es: %i\n\n",a->vector[(a->frente)%(a->tam)]);
            a->vector[(a->frente)%(a->tam)] = 0;
            a->frente ++;
            a->tam ++;
    }

    return a;
}
