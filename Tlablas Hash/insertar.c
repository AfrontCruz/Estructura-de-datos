#include <stdio.h>
#include <stdlib.h>
#include "tablas.h"

void insertar(int vector[], int elem)
{
    int aux = elem%N;
    int i = 1;
    int k = 0;
    if(vector[aux] == 0)
    {
        vector[aux] ++;
        printf("El elemento %i se guardo en la posicion %i en cero interaciones \n", elem, aux);
    }
    else
    {
        while(vector[aux] != 0)
        {
            aux = (aux + i*i)%N;
            i++;
            k++;
        }
        printf("El elemento %i se guardo en la posicion %i en %i interaciones \n", elem, aux, k);
    }

}
