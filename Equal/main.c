#include <stdio.h>
#include <stdlib.h>
#include "pilae.h"

int main()
{

    pilae *a = CreaPila();
    extrar_archivo(a);
    BorrarPila(a);

    return 0;
}
