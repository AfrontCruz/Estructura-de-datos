#include <stdio.h>
#include <stdlib.h>
#include "GeoAnalitica.h"
#include <math.h>

points *PuntoMedio()
{
    system("cls");
    points *m = CrearPunto();
    points *n = CrearPunto();

    points *pm = malloc(sizeof(points));
    if(pm == NULL){
        puts("No se pudo reservar memoria");
        exit(1);
    }

    pm->x = (m->x + n->x)/2;
    pm->y = (m->y + n->y)/2;

    return pm;
}
