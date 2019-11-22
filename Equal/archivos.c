#include <stdlib.h>
#include <stdio.h>
#include "pilae.h"

char extrar_archivo(pilae *pila){

    char step = '1';
    int aux = 10;

    FILE *a;

    a = fopen("Archivo.txt", "r");

    while(step != EOF ){
            step = fgetc(a);

            if(step == '(' || step == ')' || step == '{' || step == '}' || step == '[' || step == ']'){
                pila = push(pila, step);
            }
    }

    fclose(a);

    aux = vacio(pila);

    if (aux == 0){
        puts("Eres el mejor");
    }

    else{
        puts("Hubo un error, te falto cerrar algo");
    }

    return step;
}
