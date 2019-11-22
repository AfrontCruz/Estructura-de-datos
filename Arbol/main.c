#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

int main()
{
    system("color F0");
    nodo *raiz = Crear(1);
    Insertar(raiz, Crear(6));
    Insertar(raiz, Crear(3));
    Insertar(raiz, Crear(9));
    gestor(raiz);

    return 0;
}
