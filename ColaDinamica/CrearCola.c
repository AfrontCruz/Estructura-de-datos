#include <stdio.h>
#include <stdlib.h>
#include "ColaDinamica.h"

cola CrearCola()
{
    cola NuevaCola = malloc(sizeof(cola));
    if(NuevaCola == NULL)
    {
        puts("No se pudo reservar memoria");
        exit(1);
    }
    NuevaCola->tam = 0;
    NuevaCola->frente = NULL;

    return NuevaCola;
}
