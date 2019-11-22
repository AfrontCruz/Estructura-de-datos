#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

void BorrarCola(cola *a)
{
    free(a);
    printf("\n\n\nSe ha borrado la cola\n\n\a");
    system("pause");
}
