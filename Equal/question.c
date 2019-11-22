//Estás funciones preguntan si la pila está llena o vacia.
#include "pilae.h"
#include <stdio.h>

int vacio(pilae *pila){
    int a = 0;

    if (pila->tope == 0){
        printf("\n\nLa pila esta vacia\n\n");
        a = 0;
    }
    else{
        printf("\n\nLa pila no esta vacia\n\n");
        a = 1;
    }
    return a;
}

void lleno(pilae *pila){

    if (pila->tope >= pila->tam){
        printf("\n\nLa pila esta llena\n\n");

    }
    else{
        printf("\n\nLa pila no esta llena\n\n");
    }
}
