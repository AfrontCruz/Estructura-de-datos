//Estás funciones preguntan si la pila está llena o vacia.
#include "pilae.h"
#include <stdio.h>

void vacio(pilae *pila){

    if (pila->tope == 0){
        printf("\n\nLa pila esta vacia\n\n");
    }
    else{
        printf("\n\nLa pila no esta vacia\n\n");
    }
}

void lleno(pilae *pila){

    if (pila->tope >= MAX){
        printf("\n\nLa pila esta llena\n\n");
    }
    else{
        printf("\n\nLa pila no esta llena\n\n");
    }
}
