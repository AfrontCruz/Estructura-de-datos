//Esta es nuestra librería donde se declaran las funciones, la estructura, se define el valor de nuestra pila
//y se define _PILAESTATICA_.
#ifndef _PILAESTATICA_
#define _PILAESTATICA_

typedef struct pilae pilae;

struct pilae{
	int tam;
	char *vector;
	int *fila;
	int *columna;
	int tope;

};

pilae *CreaPila(void);
void identificador(char a);
char extrar_archivo(pilae *pila);
pilae *push(pilae *, char elem);
pilae *pop(pilae *pila);
void BorrarPila(pilae *c);
char top(pilae *pila);
int vacio(pilae *pila);
void lleno(pilae *pila);
char extrar_archivo(pilae *pila);

#endif
