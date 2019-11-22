#ifndef _ARBOL_
#define _ARBOL_



typedef struct nodo nodo;

struct nodo
{
    int info;
    nodo *iz;
    nodo *de;
};

nodo *Crear(int);
void Insertar(nodo*, nodo*);
void Imprimir_preorden(nodo*);
void Imprimir_enorden(nodo*);
void Imprimir_postorden(nodo*);
void Borrar(nodo*);
void contador(nodo*);
void gestor(nodo*);
void no_hojas();
void multiplos(nodo *raiz);

#endif // _ARBOL_
