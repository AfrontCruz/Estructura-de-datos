#include <stdio.h>
#include <stdlib.h>
#include "GeoAnalitica.h"
#include <math.h>

float Distance()
{
    system("cls");
    points *a = CrearPunto();
    points *b = CrearPunto();
    return sqrt(pow(b->y - a->y,2) + pow(b->x - a->x,2));
}
