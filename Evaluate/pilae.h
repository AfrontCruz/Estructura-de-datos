//Esta es nuestra librería donde se declaran las funciones, la estructura, se define el valor de nuestra pila
//y se define _PILAESTATICA_.
#ifndef _PILAESTATICA_
#define _PILAESTATICA_

#define MAX 50

typedef struct pilae pilae;

struct pilae{
	int vector[MAX];
	int tope;
};

pilae *CreaPila(void);
pilae *push(pilae *, int elem);
pilae *pop(pilae *pila);
void BorrarPila(pilae *c);
void top(pilae *pila);
int vacio(pilae *pila);
int lleno(pilae *pila);
void extrar_archivo();

#endif
