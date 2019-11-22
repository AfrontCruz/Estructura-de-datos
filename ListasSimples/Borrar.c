#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

void Borrar(lista a)
{
    free(a);
    printf("\n\nLa lista se ha borrado con exito \n\n\a");
    return;
}
