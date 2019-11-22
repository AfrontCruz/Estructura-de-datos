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
            printf("\n\nEl elemento que descolamos es: %i\n\n",a->vector[(a->frente)]);
            a->vector[(a->frente)] = a->vector[a->fin-1];
            a->vector[a->fin-1] = 0;
            a->tam ++;
            a->fin --;
            Heapify(a);
    }

    return a;
}
