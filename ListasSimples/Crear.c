#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

lista Crear()
{
    lista a =(lista)malloc(sizeof(lista));
    if(a == NULL)
        exit(1);
    a->tam = 0;
    a->frente = NULL;

    return a;
}
