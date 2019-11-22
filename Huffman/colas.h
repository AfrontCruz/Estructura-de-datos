#ifndef _COLAS_
#define _COLAS_

typedef struct cola cola;

struct cola
{
    char caracter;
    int frecuencia;
    cola *iz;
    cola *de;
    cola *next;
};

void archivo();
void mayus();
void crear(int*);
cola *queue(cola*, int, char, cola*);
void imprimir(cola*);
cola *deque(cola*);
void crear_arbol(cola*);
void Imprimir_preorden(cola*);

#endif
