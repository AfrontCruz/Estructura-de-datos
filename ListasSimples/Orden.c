#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

void Orden(nodo a, nodo b)
{
    if(a->sig == NULL)
    {
        a->sig = b;
        return;
    }
    if(b->info <= a->sig->info)
    {
        b->sig = a->sig;
        a->sig = b;
        return;
    }
    else
    {
        Orden(a->sig, b);
    }
}
