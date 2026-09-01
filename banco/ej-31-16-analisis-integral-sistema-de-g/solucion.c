#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nodo
{
    int dato;
    struct nodo *siguiente;
} nodo_t;
typedef struct
{
    nodo_t *primero;
    nodo_t *ultimo;
    size_t tamanio;
} lista_t;
// Función 1
lista_t *lista_crear(void)
{
    lista_t *lista = malloc(sizeof(lista_t));
    if (lista == NULL)
        return NULL;
    lista->primero = NULL;
    lista->ultimo = NULL;
    lista->tamanio = 0;
    return lista;
}
// Función 2
bool lista_insertar_final(lista_t *lista, int dato)
{
    if (lista == NULL)
        return false;
    nodo_t *nuevo = malloc(sizeof(nodo_t));
    if (nuevo == NULL)
        return false;
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    if (lista->primero == NULL)
    {
        lista->primero = nuevo;
        lista->ultimo = nuevo;
    }
    else
    {
        lista->ultimo->siguiente = nuevo;
        lista->ultimo = nuevo;
    }
    lista->tamanio++;
    return true;
}
// Función 3
bool lista_eliminar_primero(lista_t *lista, int *dato)
{
    if (lista == NULL || lista->primero == NULL)
        return false;
    nodo_t *temp = lista->primero;
    *dato = temp->dato;
    lista->primero = temp->siguiente;
    if (lista->primero == NULL)
    {
        lista->ultimo = NULL;
    }
    free(temp);
    lista->tamanio--;
    return true;
}
// Función 4
void lista_destruir(lista_t *lista)
{
    if (lista == NULL)
        return;
    nodo_t *actual = lista->primero;
    while (actual != NULL)
    {
        nodo_t *siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
    free(lista);
}
// Función 5
void lista_aplicar(lista_t *lista, void (*func)(int *, void *), void *extra)
{
    if (lista == NULL || func == NULL)
        return;
    nodo_t *actual = lista->primero;
    while (actual != NULL)
    {
        func(&actual->dato, extra);
        actual = actual->siguiente;
    }
}
// Función 6
lista_t *lista_filtrar(const lista_t *lista, bool (*pred)(int, void *),
                       void *extra)
{
    if (lista == NULL || pred == NULL)
        return NULL;
    lista_t *nueva = lista_crear();
    if (nueva == NULL)
        return NULL;
    nodo_t *actual = lista->primero;
    while (actual != NULL)
    {
        if (pred(actual->dato, extra))
        {
            if (!lista_insertar_final(nueva, actual->dato))
            {
                lista_destruir(nueva);
                return NULL;
            }
        }
        actual = actual->siguiente;
    }
    return nueva;
}
// Callbacks de ejemplo
void duplicar_dato(int *dato, void *extra)
{
    *dato *= 2;
}
bool es_mayor_que(int dato, void *extra)
{
    int limite = *(int *)extra;
    return dato > limite;
}
int main(void)
{
    lista_t *lista = lista_crear();
    for (int i = 1; i <= 5; i++)
    {
        lista_insertar_final(lista, i);
    }
    printf("Lista original (tamaño %zu): ", lista->tamanio);
    nodo_t *actual = lista->primero;
    while (actual != NULL)
    {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
    lista_aplicar(lista, duplicar_dato, NULL);
    int limite = 5;
    lista_t *filtrada = lista_filtrar(lista, es_mayor_que, &limite);
    printf("Lista filtrada (>5): ");
    actual = filtrada->primero;
    while (actual != NULL)
    {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
    lista_destruir(lista);
    lista_destruir(filtrada);
    return 0;
}