#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

int main()
{
    system("color F0");
    nodo *raiz = Crear('*');
    Insertar(raiz, Crear('3'));
    Insertar(raiz, Crear('6'));


    return 0;
}
