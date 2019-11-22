#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

int main()
{
    system("color F3");
    cola *a;
    a = CrearCola();
    leer_archivo(a);
    Heapify(a);
    imprimir(a);
    a = Deque(a);
    imprimir(a);
    a = Deque(a);
    imprimir(a);
    a = Deque(a);
    imprimir(a);

    BorrarCola(a);

    return 0;
}
