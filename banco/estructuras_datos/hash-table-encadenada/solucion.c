/*
 * Tabla Hash con Resolucion por Encadenamiento (Chaining)
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO_TABLA 17

typedef struct nodo_hash_t
{
    char clave[64];
    int valor;
    struct nodo_hash_t *siguiente;
} nodo_hash_t;

typedef struct
{
    nodo_hash_t *cubetas[TAMANO_TABLA];
} tabla_hash_t;

unsigned long funcion_hash_djb2(const char *str)
{
    unsigned long hash = 5381;
    int c = 0;

    while ((c = (unsigned char)*str++) != 0)
    {
        hash = ((hash << 5) + hash) + (unsigned long)c;
    }
    return hash % TAMANO_TABLA;
}

void inicializar_tabla(tabla_hash_t *tabla)
{
    for (int i = 0; i < TAMANO_TABLA; i++)
    {
        tabla->cubetas[i] = NULL;
    }
}

void insertar_o_actualizar(tabla_hash_t *tabla, const char *clave, int valor)
{
    unsigned long indice = funcion_hash_djb2(clave);
    nodo_hash_t *actual = tabla->cubetas[indice];

    while (actual != NULL)
    {
        if (strcmp(actual->clave, clave) == 0)
        {
            actual->valor = valor;
            return;
        }
        actual = actual->siguiente;
    }

    nodo_hash_t *nuevo = (nodo_hash_t *)malloc(sizeof(nodo_hash_t));
    if (nuevo == NULL)
    {
        return;
    }

    strncpy(nuevo->clave, clave, sizeof(nuevo->clave) - 1);
    nuevo->clave[sizeof(nuevo->clave) - 1] = '\0';
    nuevo->valor = valor;
    nuevo->siguiente = tabla->cubetas[indice];
    tabla->cubetas[indice] = nuevo;
}

void buscar_clave(const tabla_hash_t *tabla, const char *clave)
{
    unsigned long indice = funcion_hash_djb2(clave);
    nodo_hash_t *actual = tabla->cubetas[indice];

    while (actual != NULL)
    {
        if (strcmp(actual->clave, clave) == 0)
        {
            printf("%d\n", actual->valor);
            return;
        }
        actual = actual->siguiente;
    }
    printf("NO_ENCONTRADO\n");
}

void eliminar_clave(tabla_hash_t *tabla, const char *clave)
{
    unsigned long indice = funcion_hash_djb2(clave);
    nodo_hash_t *actual = tabla->cubetas[indice];
    nodo_hash_t *anterior = NULL;

    while (actual != NULL)
    {
        if (strcmp(actual->clave, clave) == 0)
        {
            if (anterior == NULL)
            {
                tabla->cubetas[indice] = actual->siguiente;
            }
            else
            {
                anterior->siguiente = actual->siguiente;
            }
            free(actual);
            printf("ELIMINADO\n");
            return;
        }
        anterior = actual;
        actual = actual->siguiente;
    }
    printf("NO_ENCONTRADO\n");
}

void destruir_tabla(tabla_hash_t *tabla)
{
    for (int i = 0; i < TAMANO_TABLA; i++)
    {
        nodo_hash_t *actual = tabla->cubetas[i];
        while (actual != NULL)
        {
            nodo_hash_t *auxiliar = actual->siguiente;
            free(actual);
            actual = auxiliar;
        }
        tabla->cubetas[i] = NULL;
    }
}

int main(void)
{
    tabla_hash_t mi_tabla;
    inicializar_tabla(&mi_tabla);

    char comando[32] = {0};
    char clave[64] = {0};
    int valor = 0;

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "INSERT") == 0)
        {
            if (scanf("%63s %d", clave, &valor) == 2)
            {
                insertar_o_actualizar(&mi_tabla, clave, valor);
            }
        }
        else if (strcmp(comando, "GET") == 0)
        {
            if (scanf("%63s", clave) == 1)
            {
                buscar_clave(&mi_tabla, clave);
            }
        }
        else if (strcmp(comando, "DELETE") == 0)
        {
            if (scanf("%63s", clave) == 1)
            {
                eliminar_clave(&mi_tabla, clave);
            }
        }
        else if (strcmp(comando, "EXIT") == 0)
        {
            break;
        }
    }

    destruir_tabla(&mi_tabla);
    return 0;
}