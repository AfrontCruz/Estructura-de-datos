#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

void Eliminar(nodo a, int x)
{
    if(a->info == x)
    {
        a->info = a->sig->info;
        a->sig = a->sig->sig;
        return;
    }

    else if(a->sig->info == x && a->sig->sig != NULL)
    {
        a->sig->info = a->sig->sig->info;
        a->sig = a->sig->sig;
        return;
    }

    if(a->sig->sig != NULL)
    {
        Eliminar(a->sig, x);
    }
    else
    {
        if(a->sig->info == x)
            a->sig = NULL;
        else
            printf("\nEl valor %i no esta en la lista\n",x);
        return;
    }

}
