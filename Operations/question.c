#include "pilae.h"
#include <stdio.h>

int vacio(pilae *pila){
    if (pila->tope == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int lleno(pilae *pila){
    if (pila->tope >= pila->tam){
        return 0;
    }
    else{
        return 1;
    }
}
