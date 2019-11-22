#include <stdio.h>
#include <stdlib.h>
#include "ColaDinamica.h"

cola Deque(cola a)
{
    if(a->tam == 0)
    {
        puts("La cola esta vacia\n\n");
    }
    else
    {
        int aux = a->frente->info;
        a->frente = a->frente->siguiente;
        printf("\n\nEl elemento que descolamos es %i\n\n",aux);
        a->tam --;
    }

    return a;
}
