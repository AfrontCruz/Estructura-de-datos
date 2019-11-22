#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

int main()
{
    system("color F8");
    lista a = Crear();
    Insertar(a,2);
    Insertar(a,4);
    Insertar(a,9);
    Insertar(a,8);
    Insertar(a,7);
    Insertar(a,7);
    Insertar(a,7);
    Insertar(a,7);
    Eliminar(a->frente,9);
    Insertar(a,9);
    Eliminar(a->frente,7);
    Eliminar(a->frente,7);
    Eliminar(a->frente,7);
    Imprimir(a->frente);
    printf("FIN");
    Borrar(a);

    return 0;
}
