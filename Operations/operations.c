#include "pilae.h"
#include <stdlib.h>
#include <stdio.h>

void suma(pilae *a){
    if (a->tope != 2){
        puts("Se han introducido datos incorrectos");
        exit(1);
    }
    int m = top(a);
    a = pop(a);
    int n = top(a);
    a = pop(a);

    int resultado = m + n;
    printf("El resultado de la suma es: %i\n\n", resultado);
    a = push(a, resultado);
}

void resta(pilae *a){
    if (a->tope != 2){
        puts("Se han introducido datos incorrectos");
        exit(1);
    }
    int m = top(a);
    a = pop(a);
    int n = top(a);
    a = pop(a);

    int resultado = n - m;
    printf("El resultado de la resta es: %i\n\n", resultado);
    a = push(a, resultado);
}

void multiplicacion(pilae *a){
    if (a->tope != 2){
        puts("Se han introducido datos incorrectos");
        exit(1);
    }
    int m = top(a);
    a = pop(a);
    int n = top(a);
    a = pop(a);

    int resultado = m * n;
    printf("El resultado de la multiplicacion es: %i\n\n", resultado);
    a = push(a, resultado);
}

void dividir(pilae *a){
    if (a->tope != 2){
        puts("Se han introducido datos incorrectos");
        exit(1);
    }
    int m = top(a);
    a = pop(a);
    int n = top(a);
    a = pop(a);

    int resultado = n / m;
    printf("El resultado de la division es: %i\n\n", resultado);
    a = push(a, resultado);
}
