//Este es el main, de aqu� se llaman las funciones.
#include <stdio.h>
#include "pilae.h"
#include <stdlib.h>

int main(){
    system("color 3B");

    pilae *a = CreaPila();

    vacio(a);
    a = push(a, 3);
    top(a);
    a = push(a, 10);
    top(a);
    BorrarPila(a);

    return 0;
}
