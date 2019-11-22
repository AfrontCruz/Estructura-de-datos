#ifndef _LISTAS_DOBLE_H
#define _LISTAS_DOBLE_H

typedef struct nodo nodo;

struct nodo
{
    int info;
    nodo *sig;
    nodo *ant;
};

void InsertarLista(nodo*, int);
nodo *NuevoLista();
void borrarLista(nodo*, int);
void buscaLista(nodo*, int, int, int);
void despliegaLista(nodo*);
void Vecindario(nodo *a, int i);

#endif // _LISTAS_DOBLE_H
