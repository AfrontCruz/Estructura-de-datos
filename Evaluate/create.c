//Está función crea un espacio de memoria dinámica para nuestra pila y así mismo, contiene una función para liberar la pila.
#include "pilae.h"
#include <stdlib.h>
#include <stdio.h>

pilae *CreaPila(void){

    pilae *NuevaPila= malloc(sizeof (pilae));
    if (NuevaPila == NULL){
        printf("No se pudo reservar el espacio de memoria\n\n");
        exit(1);
    }
    NuevaPila->tope = 0;

    return NuevaPila;
}

void BorrarPila(pilae *c){
    free(c);
}
