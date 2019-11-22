//Est� funci�n crea un espacio de memoria din�mica para nuestra pila y as� mismo, contiene una funci�n para liberar la pila.
#include "pilae.h"
#include <stdlib.h>
#include <stdio.h>

pilae *CreaPila(void){

   pilae *NuevaPila= malloc(sizeof (pilae));
   NuevaPila->tope = 0;

   return NuevaPila;
}

void BorrarPila(pilae *c){
    free(c);
    //return c;
}
