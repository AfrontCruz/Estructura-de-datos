#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

int main()
{
    system("color A0");
    nodo *a = NuevoLista();
    InsertarLista(a,4);
    InsertarLista(a,5);
    InsertarLista(a,7);
    InsertarLista(a,17);
    InsertarLista(a,11);
    InsertarLista(a,9);
    borrarLista(a->sig,12);
    despliegaLista(a->sig);
    buscaLista(a->sig,5,0);

    return 0;
}
