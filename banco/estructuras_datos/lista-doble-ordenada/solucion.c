/*
 * Lista Doblemente Enlazada Ordenada
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NodoDoble
{
    int dato;
    struct NodoDoble *anterior;
    struct NodoDoble *siguiente;
} NodoDoble;

typedef struct
{
    NodoDoble *cabeza;
    NodoDoble *cola;
} ListaDoble;

void inicializar_lista(ListaDoble *lista)
{
    lista->cabeza = NULL;
    lista->cola = NULL;
}

void insertar_ordenado(ListaDoble *lista, int valor)
{
    NodoDoble *nuevo = (NodoDoble *)malloc(sizeof(NodoDoble));
    if (nuevo == NULL)
    {
        return;
    }
    nuevo->dato = valor;
    nuevo->anterior = NULL;
    nuevo->siguiente = NULL;

    if (lista->cabeza == NULL)
    {
        lista->cabeza = nuevo;
        lista->cola = nuevo;
        return;
    }

    if (valor <= lista->cabeza->dato)
    {
        nuevo->siguiente = lista->cabeza;
        lista->cabeza->anterior = nuevo;
        lista->cabeza = nuevo;
        return;
    }

    if (valor >= lista->cola->dato)
    {
        nuevo->anterior = lista->cola;
        lista->cola->siguiente = nuevo;
        lista->cola = nuevo;
        return;
    }

    NodoDoble *actual = lista->cabeza;
    while (actual != NULL && actual->dato < valor)
    {
        actual = actual->siguiente;
    }

    nuevo->siguiente = actual;
    nuevo->anterior = actual->anterior;
    actual->anterior->siguiente = nuevo;
    actual->anterior = nuevo;
}

void eliminar_valor(ListaDoble *lista, int valor)
{
    NodoDoble *actual = lista->cabeza;
    while (actual != NULL && actual->dato != valor)
    {
        actual = actual->siguiente;
    }

    if (actual == NULL)
    {
        return;
    }

    if (actual == lista->cabeza && actual == lista->cola)
    {
        lista->cabeza = NULL;
        lista->cola = NULL;
    }
    else if (actual == lista->cabeza)
    {
        lista->cabeza = actual->siguiente;
        lista->cabeza->anterior = NULL;
    }
    else if (actual == lista->cola)
    {
        lista->cola = actual->anterior;
        lista->cola->siguiente = NULL;
    }
    else
    {
        actual->anterior->siguiente = actual->siguiente;
        actual->siguiente->anterior = actual->anterior;
    }
    free(actual);
}

void imprimir_ascendente(const ListaDoble *lista)
{
    NodoDoble *actual = lista->cabeza;
    while (actual != NULL)
    {
        printf("%d%c", actual->dato, actual->siguiente ? ' ' : '\n');
        actual = actual->siguiente;
    }
    if (lista->cabeza == NULL)
    {
        printf("\n");
    }
}

void imprimir_descendente(const ListaDoble *lista)
{
    NodoDoble *actual = lista->cola;
    while (actual != NULL)
    {
        printf("%d%c", actual->dato, actual->anterior ? ' ' : '\n');
        actual = actual->anterior;
    }
    if (lista->cola == NULL)
    {
        printf("\n");
    }
}

void liberar_lista(ListaDoble *lista)
{
    NodoDoble *actual = lista->cabeza;
    while (actual != NULL)
    {
        NodoDoble *aux = actual->siguiente;
        free(actual);
        actual = aux;
    }
    lista->cabeza = NULL;
    lista->cola = NULL;
}

int main(void)
{
    ListaDoble lista;
    inicializar_lista(&lista);

    char comando[32] = {0};
    int valor = 0;

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "ADD") == 0)
        {
            if (scanf("%d", &valor) == 1)
            {
                insertar_ordenado(&lista, valor);
            }
        }
        else if (strcmp(comando, "DEL") == 0)
        {
            if (scanf("%d", &valor) == 1)
            {
                eliminar_valor(&lista, valor);
            }
        }
        else if (strcmp(comando, "PRINT_ASC") == 0)
        {
            imprimir_ascendente(&lista);
        }
        else if (strcmp(comando, "PRINT_DESC") == 0)
        {
            imprimir_descendente(&lista);
        }
        else if (strcmp(comando, "EXIT") == 0)
        {
            break;
        }
    }

    liberar_lista(&lista);
    return 0;
}