#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

int Llena(cola *a)
{
    return (a->tam == 0); //SI ESTA LLENA REGRESA 1, SI NO, 0
}

int Vacia(cola *a)
{
    return (a->fin == a->frente);   //REGRESA 1 SI ESTA VACIA, SI NO, 0
}

cola *Queue(cola *a, int elem)
{
    int aux = Llena(a);
    if (aux == 1)
    {
        printf("\nLa cola esta llena\n\a");
    }

    else
    {
        a->vector[(a->fin)] = elem;
        a->fin ++;
        a->tam --;
    }

    return a;
}

void *imprimir(cola *a)
{
    printf("\n");
    for (int i = a->frente; i < a->fin; i++)
    {
        printf(" %i, ",a->vector[i]);
    }
}

cola *Deque(cola *a)
{
    int aux = Vacia(a);
    if (aux == 1)
    {
        printf("\nLa cola esta vacia, no se puede hacer Deque\n\n\a");
    }
    else
    {
            printf("\n\nEl elemento que descolamos es: %i\n\n",a->vector[(a->frente)]);
            a->vector[(a->frente)] = a->vector[a->fin-1];
            a->vector[a->fin-1] = 0;
            a->tam ++;
            a->fin --;
            Heapify(a);
    }

    return a;
}

cola *CrearCola()
{
    cola *NuevaCola = (cola*)malloc(sizeof (cola));
    if (NuevaCola == NULL)
    {
        puts("No se pudo reservar espacio de memoria");
    }

    NuevaCola->tam = 100;
    NuevaCola->vector = (int*)malloc(NuevaCola->tam*sizeof(int));
    NuevaCola->tam = 97;        //***El tamaño se ajusta debido a los dos espacios utilizados en la funcion Heapify
    NuevaCola->frente = 1;      //y ahí mismo se explica el por qué se están reservando y otro porque nuestro
    NuevaCola->fin = 1;         //vector empieza en 1 por lo tanto no se ocupa la posición 0 ***

    return NuevaCola;
}

void BorrarCola(cola *a)
{
    free(a);
    printf("\n\n\nSe ha borrado la cola\n\n\a");
    system("pause");
}
