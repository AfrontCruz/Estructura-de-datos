#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main(){
    pila a;
    a = CreaPila();
    a = Pop(a);
    a = Push(a, 4);
    a = Push(a, 7);
    a = Push(a, 9);
    Top(a);
    a = Pop(a);
    a = Pop(a);
    Top(a);
    BorraPila(a);

    return 0;
}
