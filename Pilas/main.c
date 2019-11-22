//Este es el main, de aquí se llaman las funciones.
#include <stdio.h>
#include "pilae.h"
#include <stdlib.h>

int main(){

    pilae *a = CreaPila();

    if (a == NULL){
        printf("No se pudo reservar el espacio de memoria\n\n");
        exit(1);
    }

    vacio(a);
    a = push(a, 3);
    top(a);
    a = push(a, 10);
    a = pop(a);
    top(a);
    vacio(a);
    lleno(a);

    BorrarPila(a);

    return 0;
}
