#include<stdio.h>
#include<stdlib.h>
#include "colas.h"

void crear(int *vec)
{
    int i = 0;
    cola *a = NULL;
    for(i = 0; i < 255; i++)
        if(vec[i] > 0)
            a = queue(a, vec[i], i, NULL);

    imprimir(a);
}

cola *queue(cola *frente, int frec, char car, cola *pr)
{
    cola *nueva = (cola*)malloc(sizeof(cola));
    cola *aux, *aux1;
    if(nueva == NULL)
        exit(1);
    if(pr == NULL)
    {
        nueva->caracter = car;
        nueva->frecuencia = frec;
        nueva->next = NULL;
        nueva->de = NULL;
        nueva->iz = NULL;
    }
    else
        nueva = pr;

    if(frente == NULL)
        return nueva;

    aux = frente;
    while(aux->next != NULL)
    {
        if(aux->frecuencia > nueva->frecuencia)
        {
            if(aux == frente)
            {
                nueva->next = frente;
                return nueva;
            }
            else
            {
                aux1->next = nueva;
                nueva->next = aux;
                return frente;
            }
        }
        else
        {
            aux1 = aux;
            aux = aux->next;
        }
    }

    if(aux->frecuencia > nueva->frecuencia)
    {
        aux1->next = nueva;
        nueva->next = aux;
    }
    else
        aux->next = nueva;


    return frente;
}

void imprimir(cola *frente)
{
    cola *aux = frente;
    while(aux != NULL)
    {
        printf("El char es: %c y aparece %i veces\n\n",aux->caracter, aux->frecuencia);
        aux = aux->next;
    }
    crear_arbol(frente);
}

cola *deque(cola *frente)
{
    if(frente == NULL)
        printf("No hay elementros en la cola\n\n");
    else
        return frente->next;

    return frente;
}
