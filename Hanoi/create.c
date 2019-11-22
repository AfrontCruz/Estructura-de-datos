#include "hanoi.h"
#include <stdio.h>
#include <stdlib.h>

pila Create(int n)
{
    pila *torre = (pila*)malloc(sizeof(pila));
    if (torre == NULL)
    {
        exit(1);
    }
    torre->tam = n;
    torre->torre = malloc(sizeof*(torre->tam)(int));
    if (torre->torre == NULL)
    {
        exit(1);
    }

    return torre;
}

