#ifndef _ARBOL_
#define _ARBOL_



typedef struct nodo nodo;

struct nodo
{
    char info;
    nodo *iz;
    nodo *de;
};

nodo *Crear(char);
void Insertar(nodo*, nodo*);
void Imprimir_preorden(nodo*);
void Imprimir_enorden(nodo*);
void Imprimir_postorden(nodo*);
void Borrar(nodo*);

#endif // _ARBOL_
