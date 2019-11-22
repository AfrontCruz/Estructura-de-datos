#ifndef _COLA_DINAMICA_
#define _COLA_DINAMICA_

typedef struct cola *cola;
typedef struct nodo *nodo;

struct cola{
    int tam;
    nodo frente;
    nodo tope;
};

struct nodo{
    int info;
    nodo siguiente;
};

cola CrearCola(void);
void BorrarCola(cola);
cola Queue(cola, int);

#endif // _COLA_DINAMICA_
