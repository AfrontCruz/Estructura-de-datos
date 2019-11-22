#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

void BorrarCola(cola *a)
{
    free(a);
    printf("Se ha borrado la cola\n\a");
}
