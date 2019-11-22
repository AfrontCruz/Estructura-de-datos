#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

int Llena(cola *a)
{
    return (a->tam == 0); //SI ESTA LLENA REGRESA 1, SI NO, 0
}
