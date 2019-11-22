#include <stdio.h>
#include <stdlib.h>
#include "GeoAnalitica.h"

points *CrearPunto()
{
    points *a = malloc(sizeof(points));
    if (a == NULL)
    {
        puts("No se pudo reservar memoria");
        exit(1);
    }
    printf("\n\nElige el valor de x: ");
    scanf("%f",&a->x);
    printf("\n\nElige el valor de y: ");
    scanf("%f",&a->y);

    return a;
}
