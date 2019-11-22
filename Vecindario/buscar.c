#include <stdio.h>
#include <stdlib.h>
#include "ListasDoblementeEnlazadas.h"

void buscaLista(nodo *a, int elem, int i, int rango)
{
   if(a != NULL)
   {
       i++;
       if(a->info == elem)
       {
           //printf("\n\nEl elemento %i se ecuentra en la posicion %i\n\n",a->info, i);
           Vecindario(a,rango);
           return;
       }
       buscaLista(a->sig, elem, i, rango);
   }
   else
   {
       printf("\nEl elemento %i no se encuentra en la lista",elem);
   }
}
