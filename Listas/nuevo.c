#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

pila CreaPila(){
    pila NuevaPila = (pila)malloc(sizeof(struct pila));
    if( NuevaPila == NULL){
        puts("No se pudo reservar memoria");
        exit(1);
    }
    NuevaPila->tam = 0;
    NuevaPila->tope = NULL;

    return NuevaPila;
}

void BorraPila(pila p){
    free(p);
}

pila Pop(pila a){
    if(a->tam == 0){
        puts("La pila esta vacia");
        return a;
    }
    nodo BorraNodo = malloc(sizeof(struct nodo));
    if( BorraNodo == NULL){
        puts("No se pudo reservar memoria");
        exit(1);
    }
    BorraNodo->info = a->tope->prev->info;
    BorraNodo->prev = a->tope->prev->prev;
    a->tope = BorraNodo;
    a->tam = a->tam - 1;

    return a;
}

pila Push(pila a, int elem){
    nodo NuevoNodo = malloc(sizeof(struct nodo));
    if( NuevoNodo == NULL){
        puts("No se pudo reservar memoria");
        exit(1);
    }
    NuevoNodo->info = elem;
    NuevoNodo->prev = a->tope;
    a->tope = NuevoNodo;
    a->tam = a->tam + 1;

    return a;
}

void Top(pila a){
    int tope = 0;
    tope = a->tope->info;
    printf("\n\nEl valor del tope es... %i\n\n", tope);
}
