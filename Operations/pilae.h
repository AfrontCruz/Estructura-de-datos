#ifndef _PILAESTATICA_
#define _PILAESTATICA_

typedef struct pilae pilae;

struct pilae{
	int tam;
	int *vector;
	int tope;
};

pilae *CreaPila(void);
pilae *push(pilae *, int elem);
pilae *pop(pilae *pila);
void BorrarPila(pilae *c);
int top(pilae *pila);
int vacio(pilae *pila);
int lleno(pilae *pila);
void extrar_archivo();
void suma(pilae *a);
void resta(pilae *a);
void multiplicacion(pilae *a);
void dividir(pilae *a);

#endif
