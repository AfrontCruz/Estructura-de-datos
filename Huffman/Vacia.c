#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

int Vacia(cola *a)
{
    return (a->fin == a->frente);   //REGRESA 1 SI ESTA VACIA, SI NO, 0
}
