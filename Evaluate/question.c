//Est�s funciones preguntan si la pila est� llena o vacia.
#include "pilae.h"
#include <stdio.h>

int vacio(pilae *pila)
{
    return (pila->tope == 0);
}

int lleno(pilae *pila)
{
    return (pila->tope == MAX);
}
