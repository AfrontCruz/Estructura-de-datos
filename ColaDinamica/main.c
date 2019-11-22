#include <stdio.h>
#include <stdlib.h>
#include "ColaDinamica.h"

int main()
{
    system("color F3");
    cola a = CrearCola();
    a = Queue(a,3);
    a = Deque(a);
    a = Deque(a);
    a = Queue(a,6);
    a = Queue(a,10);
    a = Queue(a,11);
    a = Deque(a);
    a = Deque(a);
    a = Deque(a);

    BorrarCola(a);
    return 0;
}
