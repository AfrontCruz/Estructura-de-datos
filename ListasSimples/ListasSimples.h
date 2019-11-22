#ifndef _LISTAS_
#define _LISTAS_

typedef struct lista *lista;
typedef struct nodo *nodo;

struct lista
{
    int tam;
    nodo frente;
};

struct nodo
{
    int info;
    nodo sig;
};

lista Crear();
void Borrar(lista);
void Insertar(lista, int);
void Orden(nodo, nodo);
void Imprimir(nodo);
void Eliminar(nodo, int);

#endif // _LISTAS_
