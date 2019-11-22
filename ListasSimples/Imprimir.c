#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

void Imprimir(nodo a)
{
    printf("%c %i \n",a->caracter, a->aparicion);
    if(a->sig != NULL)
    {
        Imprimir(a->sig);
    }
    
    return;
}
