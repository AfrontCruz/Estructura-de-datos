#ifndef _COLAS_
#define _COLAS_

typedef struct cola cola;

struct cola
{
    int tam;
    int *vector;
    int frente;
    int fin;
};

cola *CrearCola(void);
void BorrarCola(cola*);
cola *Queue(cola*, int);
cola *Deque(cola*);
int Vacia(cola*);
int Llena(cola*);
void leer_archivo(cola*);
void *Heapify(cola*);
void *imprimir(cola*);


#endif
