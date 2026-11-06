#include "trie-pref-08.h"

#include <stdlib.h>
#include <string.h>

static long reserva_fallida = -1;
static size_t contador_reservas;

void radix_test_fallar_reserva(long indice)
{
    reserva_fallida = indice;
    contador_reservas = 0;
}

static bool debe_fallar_reserva(void)
{
    if (reserva_fallida < 0) {
        return false;
    }
    return contador_reservas++ == (size_t)reserva_fallida;
}

static void *radix_malloc(size_t bytes)
{
    return debe_fallar_reserva() ? NULL : malloc(bytes);
}

static void *radix_calloc(size_t cantidad, size_t bytes)
{
    return debe_fallar_reserva() ? NULL : calloc(cantidad, bytes);
}

static void *radix_realloc(void *puntero, size_t bytes)
{
    return debe_fallar_reserva() ? NULL : realloc(puntero, bytes);
}

static radix_nodo_t *radix_nuevo_nodo(void)
{
    return radix_calloc(1, sizeof(radix_nodo_t));
}

radix_nodo_t *radix_crear(void)
{
    return radix_nuevo_nodo();
}

static size_t prefijo_comun(const char *etiqueta, size_t longitud,
                            const char *palabra)
{
    size_t i = 0;

    while (i < longitud && palabra[i] != '\0' && etiqueta[i] == palabra[i]) {
        i++;
    }
    return i;
}

static bool insertar_en(radix_nodo_t *nodo, const char *palabra)
{
    size_t indice = 0;

    if (*palabra == '\0') {
        nodo->terminal = true;
        return true;
    }

    while (indice < nodo->cantidad &&
           (unsigned char)nodo->aristas[indice].etiqueta[0] !=
               (unsigned char)palabra[0]) {
        indice++;
    }

    if (indice == nodo->cantidad) {
        size_t longitud = strlen(palabra);
        radix_nodo_t *hijo = radix_nuevo_nodo();
        char *etiqueta = radix_malloc(longitud);
        radix_arista_t *aristas = NULL;
        size_t capacidad = nodo->capacidad;

        if (capacidad == nodo->cantidad) {
            capacidad = capacidad == 0 ? 4 : capacidad * 2;
            if (capacidad < nodo->capacidad ||
                capacidad > (size_t)-1 / sizeof(*aristas)) {
                free(hijo);
                free(etiqueta);
                return false;
            }
            aristas = radix_realloc(nodo->aristas,
                                    capacidad * sizeof(*aristas));
            if (aristas == NULL) {
                free(hijo);
                free(etiqueta);
                return false;
            }
        }
        if (hijo == NULL || etiqueta == NULL) {
            free(hijo);
            free(etiqueta);
            if (aristas != NULL && aristas != nodo->aristas) {
                nodo->aristas = aristas;
                nodo->capacidad = capacidad;
            }
            return false;
        }

        memcpy(etiqueta, palabra, longitud);
        hijo->terminal = true;
        if (aristas != NULL) {
            nodo->aristas = aristas;
            nodo->capacidad = capacidad;
        }
        nodo->aristas[nodo->cantidad++] =
            (radix_arista_t){etiqueta, longitud, hijo};
        return true;
    }

    radix_arista_t *arista = &nodo->aristas[indice];
    size_t comun = prefijo_comun(arista->etiqueta, arista->longitud, palabra);

    if (comun == arista->longitud) {
        return insertar_en(arista->hijo, palabra + comun);
    }
    if (comun == 0) {
        return false;
    }

    /* Preparar todas las reservas antes de tocar la arista existente. */
    size_t sufijo_viejo = arista->longitud - comun;
    size_t sufijo_nuevo = strlen(palabra + comun);
    radix_nodo_t *medio = radix_nuevo_nodo();
    char *etiqueta_prefijo = radix_malloc(comun);
    char *etiqueta_vieja = radix_malloc(sufijo_viejo);
    radix_arista_t *hijos_medio = radix_malloc(2 * sizeof(*hijos_medio));
    radix_nodo_t *hoja_nueva = NULL;
    char *etiqueta_nueva = NULL;

    if (sufijo_nuevo != 0) {
        hoja_nueva = radix_nuevo_nodo();
        etiqueta_nueva = radix_malloc(sufijo_nuevo);
    }

    if (medio == NULL || etiqueta_prefijo == NULL || etiqueta_vieja == NULL ||
        hijos_medio == NULL ||
        (sufijo_nuevo != 0 && (hoja_nueva == NULL || etiqueta_nueva == NULL))) {
        free(medio);
        free(etiqueta_prefijo);
        free(etiqueta_vieja);
        free(hijos_medio);
        free(hoja_nueva);
        free(etiqueta_nueva);
        return false;
    }

    memcpy(etiqueta_prefijo, palabra, comun);
    memcpy(etiqueta_vieja, arista->etiqueta + comun, sufijo_viejo);
    if (sufijo_nuevo != 0) {
        memcpy(etiqueta_nueva, palabra + comun, sufijo_nuevo);
        hoja_nueva->terminal = true;
    } else {
        medio->terminal = true;
    }

    hijos_medio[0] = (radix_arista_t){etiqueta_vieja, sufijo_viejo,
                                      arista->hijo};
    medio->cantidad = 1;
    medio->capacidad = 2;
    if (sufijo_nuevo != 0) {
        hijos_medio[1] = (radix_arista_t){etiqueta_nueva, sufijo_nuevo,
                                          hoja_nueva};
        medio->cantidad = 2;
    }
    medio->aristas = hijos_medio;

    free(arista->etiqueta);
    arista->etiqueta = etiqueta_prefijo;
    arista->longitud = comun;
    arista->hijo = medio;
    return true;
}

bool radix_insertar(radix_nodo_t *raiz, const char *palabra)
{
    return raiz != NULL && palabra != NULL && palabra[0] != '\0' &&
           insertar_en(raiz, palabra);
}

bool radix_buscar(const radix_nodo_t *nodo, const char *palabra)
{
    if (nodo == NULL || palabra == NULL) {
        return false;
    }
    if (palabra[0] == '\0') {
        return nodo->terminal;
    }
    for (size_t i = 0; i < nodo->cantidad; i++) {
        const radix_arista_t *arista = &nodo->aristas[i];
        if ((unsigned char)palabra[0] ==
                (unsigned char)arista->etiqueta[0] &&
            strncmp(palabra, arista->etiqueta, arista->longitud) == 0) {
            return radix_buscar(arista->hijo, palabra + arista->longitud);
        }
    }
    return false;
}

static void destruir_nodo(radix_nodo_t *nodo)
{
    if (nodo == NULL) {
        return;
    }
    for (size_t i = 0; i < nodo->cantidad; i++) {
        free(nodo->aristas[i].etiqueta);
        destruir_nodo(nodo->aristas[i].hijo);
    }
    free(nodo->aristas);
    free(nodo);
}

void radix_destruir(radix_nodo_t *raiz)
{
    destruir_nodo(raiz);
}
