//Este es el main, de aquí se llaman las funciones.
#include <stdio.h>
#include "pilae.h"
#include <stdlib.h>

int main(){
    system("color F0");
    puts("Este programa sirve para hacer operaciones con sufijos pero solo con numeros enteros\n\n");
    pilae *a = CreaPila();
    extrar_archivo(a);
    BorrarPila(a);


    return 0;
}
