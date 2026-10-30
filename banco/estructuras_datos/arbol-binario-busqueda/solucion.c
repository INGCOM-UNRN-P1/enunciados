/*
 * Arbol Binario de Busqueda (BST)
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo_bst_t
{
    int dato;
    struct nodo_bst_t *izq;
    struct nodo_bst_t *der;
} nodo_bst_t;

static nodo_bst_t *crear_nodo(int valor)
{
    nodo_bst_t *n = (nodo_bst_t *)malloc(sizeof(nodo_bst_t));
    if (n == NULL)
    {
        return NULL;
    }
    n->dato = valor;
    n->izq = NULL;
    n->der = NULL;
    return n;
}

static nodo_bst_t *insertar_bst(nodo_bst_t *raiz, int valor)
{
    if (raiz == NULL)
    {
        return crear_nodo(valor);
    }
    if (valor < raiz->dato)
    {
        raiz->izq = insertar_bst(raiz->izq, valor);
    }
    else if (valor > raiz->dato)
    {
        raiz->der = insertar_bst(raiz->der, valor);
    }
    return raiz;
}

int buscar_bst(const nodo_bst_t *raiz, int valor)
{
    if (raiz == NULL)
    {
        return 0;
    }
    if (raiz->dato == valor)
    {
        return 1;
    }
    if (valor < raiz->dato)
    {
        return buscar_bst(raiz->izq, valor);
    }
    return buscar_bst(raiz->der, valor);
}

int calcular_altura(const nodo_bst_t *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    int alt_izq = calcular_altura(raiz->izq);
    int alt_der = calcular_altura(raiz->der);
    return 1 + (alt_izq > alt_der ? alt_izq : alt_der);
}

void recorrido_inorder(const nodo_bst_t *raiz)
{
    if (raiz != NULL)
    {
        recorrido_inorder(raiz->izq);
        printf("%d ", raiz->dato);
        recorrido_inorder(raiz->der);
    }
}

void recorrido_preorder(const nodo_bst_t *raiz)
{
    if (raiz != NULL)
    {
        printf("%d ", raiz->dato);
        recorrido_preorder(raiz->izq);
        recorrido_preorder(raiz->der);
    }
}

void liberar_arbol(nodo_bst_t *raiz)
{
    if (raiz != NULL)
    {
        liberar_arbol(raiz->izq);
        liberar_arbol(raiz->der);
        free(raiz);
    }
}

int main(void)
{
    nodo_bst_t *raiz = NULL;
    char comando[32] = {0};
    int valor = 0;

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "INSERT") == 0)
        {
            if (scanf("%d", &valor) == 1)
            {
                raiz = insertar_bst(raiz, valor);
            }
        }
        else if (strcmp(comando, "SEARCH") == 0)
        {
            if (scanf("%d", &valor) == 1)
            {
                if (buscar_bst(raiz, valor))
                {
                    printf("ENCONTRADO\n");
                }
                else
                {
                    printf("NO_ENCONTRADO\n");
                }
            }
        }
        else if (strcmp(comando, "INORDER") == 0)
        {
            recorrido_inorder(raiz);
            printf("\n");
        }
        else if (strcmp(comando, "PREORDER") == 0)
        {
            recorrido_preorder(raiz);
            printf("\n");
        }
        else if (strcmp(comando, "HEIGHT") == 0)
        {
            printf("%d\n", calcular_altura(raiz));
        }
        else if (strcmp(comando, "EXIT") == 0)
        {
            break;
        }
    }

    liberar_arbol(raiz);
    return 0;
}