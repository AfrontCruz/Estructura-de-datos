#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

cola *CrearCola()
{
    cola *NuevaCola = (cola*)malloc(sizeof (cola));
    if (NuevaCola == NULL)
    {
        puts("No se pudo reservar espacio de memoria");
    }

    NuevaCola->tam = 100;
    NuevaCola->vector = (int*)malloc(NuevaCola->tam*sizeof(int));
    NuevaCola->frente = 0;
    NuevaCola->fin = 0;

    return NuevaCola;
}
