//Estas funciones se encargan de poner, quitar e imprimir el número qué está en el tope.
#include "pilae.h"
#include <stdlib.h>
#include <stdio.h>

pilae *push(pilae *pila, int elem){

    if(lleno(pila)){
        printf("\n\nLa pila esta llena\n\n");
    }

    else{
        pila->vector[pila->tope] = elem;
        pila->tope ++;
    }

    return pila;
}

pilae *pop(pilae *pila){

    pila->vector[(pila->tope)-1] = 0;
    pila->tope --;

    return pila;
}

void top(pilae *pila){

    printf("\n\n El ultimo elemento es %i\n\n",pila->vector[(pila->tope)-1]);

}


