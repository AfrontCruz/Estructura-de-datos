#ifndef _GEOANALITICA_
#define _GEOANALITICA_

typedef struct points points;

struct points
{
    float x;
    float y;
};

float Pendiente();
points *CrearPunto();
float Distance();
points *PuntoMedio();
void BorrarPoints(points *a);
void menu();

#endif
