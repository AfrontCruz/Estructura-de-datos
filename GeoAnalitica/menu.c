#include <stdio.h>
#include <stdlib.h>
#include "GeoAnalitica.h"

void menu()
{
    char a;
    float pendiente = 0, distancia = 0;
    points *medio = 0;
    system("cls");
    printf("Selecciona la opcion deseada: \na) Distancia entre dos puntos\nb) Pendiente\nc) Punto Medio\nd) Salir\n");
    fflush(stdin);
    a = getc(stdin);
    switch(a)
    {
        case 'a':
        case 'A':
            distancia = Distance();
            printf("\nLa distancia es: %0.2f\n\n", distancia);
            system("pause");
            menu();
            break;
        case 'b':
        case 'B':
            pendiente = Pendiente();
            printf("\nLa pendiente es: %0.2f\n\n",pendiente);
            system("pause");
            menu();
            break;
        case 'c':
        case 'C':
            medio = PuntoMedio();
            printf("\nEl punto es: (%0.2f,%0.2f)\n\n",medio->x,medio->y);
            system("pause");
            menu();
            break;
        case 'd':
        case 'D':
            break;
        default:
            menu();
    }
}
