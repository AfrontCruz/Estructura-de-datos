#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

int main()
{
    system("color F3");
    cola *a;
    a = CrearCola();
    a = Queue(a, 3);
    a = Queue(a, 7);
    a = Queue(a, 10);
    a = Queue(a, 11);
    a = Deque(a);
    a = Deque(a);
    a = Deque(a);
    a = Deque(a);
    a = Deque(a);
    BorrarCola(a);

    return 0;
}
