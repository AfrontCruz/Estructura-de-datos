#include <stdio.h>
#include <stdlib.h>
#include "tablas.h"

int main()
{
    system("color F0");
    int i, suma = 0;
    int *vector = (int*)calloc(N, sizeof(int));
    leer(vector);

    for(i = 0; i < N; i++)
    {
        if(vector[i] > 1)
            suma += (vector[i]-1);
    }

    printf("\n\nEl numero de colisiones es: %i",suma);
    system("pause");
    return 0;
}

