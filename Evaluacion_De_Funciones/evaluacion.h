#ifndef _EVALUACION_
#define _EVALUACION_

typedef struct nodo nodo;

struct nodo
{
    nodo *next;
    int coeficiente;
    int exponente;
};

nodo *insertar(nodo*);
float evaluar(nodo*, float);
void imprimir(nodo*, float, float);

#endif // _EVALUACION
