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
    NuevaCola->tam = 97;        //***El tama�o se ajusta debido a los dos espacios utilizados en la funcion Heapify
    NuevaCola->frente = 1;      //y ah� mismo se explica el por qu� se est�n reservando y otro porque nuestro
    NuevaCola->fin = 1;         //vector empieza en 1 por lo tanto no se ocupa la posici�n 0 ***

    return NuevaCola;
}
