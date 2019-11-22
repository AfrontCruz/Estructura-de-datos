#include <stdio.h>
#include <stdlib.h>
#include "evaluacion.h"

int main()
{
    system("color F9");
    int i = 0, elem = 0;
    float valor = 0;
    float a = 0;
    nodo *head = NULL;
    printf("De cuantos elementos sera el polinomio?: ");
    scanf("%i",&elem);
    for(i = 0; i < elem; i++)
        head = insertar(head);
    printf("\nEn que valor quieres evaluar la funcion?: ");
    scanf("%f",&valor);
    a = evaluar(head,valor);
    imprimir(head,a,valor);
    system("pause");
    return 0;
}

void imprimir(nodo *head, float resultado, float valor)
{
    nodo *aux = head;
    printf("\nLa funcion es: \n\n");
    while(aux != NULL)
    {
        printf("(%ix^%i)",aux->coeficiente, aux->exponente);
        if(aux->next != NULL)
            printf(" + ");
        aux = aux->next;
    }
    printf("\n\nEl resultado de evaluar la funcion en %0.3f es: %0.3f\n\n", valor, resultado);

    return;
}
