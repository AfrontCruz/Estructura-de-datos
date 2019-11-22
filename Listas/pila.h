#ifndef _PILA_CON_LISTAS_
#define _PILA_CON_LISTAS_

typedef struct pila *pila;
typedef struct nodo *nodo;

struct pila{
	char caracter;
    int tam;
    nodo tope;
};

struct nodo{
    int info;
    nodo prev;
};


pila CreaPila(void);
pila Push(pila, int);
pila Pop(pila);
void Top(pila);
void BorraPila(pila);

#endif
