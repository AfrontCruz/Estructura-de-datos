//Estas funciones se encargan de poner, quitar e imprimir el número qué está en el tope.
#include "pilae.h"
#include <stdlib.h>
#include <stdio.h>

pilae *push(pilae *pila, char elem){

    if(pila->tope >= pila->tam-1){
        printf("\n\nLa pila esta llena\n\n");
        exit(5);
    }

    else{
        pila->vector[pila->tope] = elem;
        pila->tope ++;

    }

    return pila;
}

pilae *pop(pilae *pila){

    pila->vector[(pila->tope)-1] = '0';
    pila->tope --;

    return pila;
}

char top(pilae *pila){

    char  m = pila->vector[(pila->tope)-1];
    return m;

}


