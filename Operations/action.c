//Estas funciones se encargan de poner, quitar e imprimir el número qué está en el tope.
#include "pilae.h"
#include <stdlib.h>
#include <stdio.h>

pilae *push(pilae *pila, int elem){
    int a = lleno(pila);
    if(a == 0){
        puts("La pila está llena");
        exit(2);
    }
    pila->vector[pila->tope] = elem;
    pila->tope ++;

    return pila;
}

pilae *pop(pilae *pila){
    int a = vacio(pila);
    if(a == 0){
        puts("La pila está vacía");
        exit(2);
    }
    pila->vector[(pila->tope)-1] = 0;
    pila->tope --;

    return pila;
}

int top(pilae *pila){
    int x = pila->vector[(pila->tope)-1];

    return x;
}


