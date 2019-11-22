#include <stdio.h>
#include <stdlib.h>
#include "tablas.h"

void leer(int vector[])
{
    char aux[50];
    FILE *a;
    a = fopen("80.txt","r");
    while(!feof(a))
    {
        fgets(aux,50,a);
        insertar(vector, atoi(aux));
    }
    fclose(a);
}
