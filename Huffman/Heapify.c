#include <stdio.h>
#include "colas.h"

void *Heapify(cola *a)
{
	int i, aux = 0;
	a->vector[a->fin] = 0;              //Estos dos ceros sirven para que no compare los dos siguientes lugares del heapify
	a->vector[(a->fin)+1] = 0;          //por tanto hay que considerar dos lugares más dentro del vector

	for(i = a->frente; i <= (a->fin)/2; i++)
    {
        if(a->vector[i] <= a->vector[2*i] || a->vector[i] <= a->vector[(2*i)+1])
        {
            aux = a->vector[i];
            if( a->vector[2*i] <= a->vector[(2*i)+1])
            {
                a->vector[i] = a->vector[(2*i)+1];
                a->vector[(2*i)+1] = aux;
            }
            else
            {
                a->vector[i] = a->vector[(2*i)];
                a->vector[(2*i)] = aux;
            }
        }
        if(a->vector[i] > a->vector[i/2] && i > 1)
        {
            Heapify(a);
        }
    }

	return a;
}
