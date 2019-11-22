#include <stdio.h>
#include <stdlib.h>
#include "evaluacion.h"

nodo *insertar(nodo *head)
{
    int c, e;
    nodo *aux, *nuevo = (nodo*)malloc(sizeof(struct nodo));
    if(nuevo == NULL)
        exit(1);

    printf("\nInsertar el coeficiente: ");
    scanf("%i",&c);
    nuevo->coeficiente = c;
    printf("\nInsertar el exponente: ");
    scanf("%i",&e);
    nuevo->exponente = e;
    nuevo->next = NULL;

    if(head == NULL)
        return nuevo;

    aux = head;

    while(aux->next != NULL)
        aux = aux->next;
    aux->next = nuevo;

    return head;
}
