#include <stdlib.h>

struct nodo_t
{
    int dato;
    struct nodo_t *siguiente;
};
void agregar_nodo(struct nodo_t **cabeza, int valor)
{
    struct nodo_t *nuevo = malloc(sizeof(struct nodo_t));
    nuevo->dato = valor;
    nuevo->siguiente = *cabeza;
    *cabeza = nuevo;
}
int main()
{
    struct nodo_t *lista = NULL;
    for (int i = 0; i < 100; i++)
    {
        agregar_nodo(&lista, i);
    }
    // FALTA: liberar todos los nodos
    return 0;
}