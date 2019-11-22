#include <stdio.h>
#include <stdlib.h>
#include "GeoAnalitica.h"

float Pendiente()
{
    system("cls");
    points *a = CrearPunto();
    points *b = CrearPunto();

    return b->x == a->x?puts("la pendiente es infinita"):(b->y - a->y)/(b->x - a->x);
}
