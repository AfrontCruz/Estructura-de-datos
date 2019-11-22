#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

int main()
{
    system("color A0");
    int i = 0;
    nodo *a = NuevoLista();
    while(i <31)
    {
        i++;
        if(i == 4 || i == 6 || (i>=14 && i<=19) || (i>=21 && i<=26) || i == 28 || i == 30)
            continue;

        InsertarLista(a,i);
    }

    despliegaLista(a->sig);
    buscaLista(a->sig,3,0,3);
    printf("\n");


    return 0;
}
