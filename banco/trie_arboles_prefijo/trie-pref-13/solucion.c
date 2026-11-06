#include "trie-pref-13.h"

static size_t sugerir_rec(const trie_nodo_t *nodo, const char *consulta,
                          size_t longitud, size_t maximo, char *palabra,
                          size_t profundidad, size_t filas[256][256],
                          char resultados[][256], size_t capacidad,
                          size_t cantidad)
{
    if (nodo->terminal && filas[profundidad][longitud] <= maximo &&
        cantidad < capacidad) {
        palabra[profundidad] = '\0';
        memcpy(resultados[cantidad], palabra, profundidad + 1);
        cantidad++;
    }

    if (profundidad == 255) {
        return cantidad;
    }

    for (size_t i = 0; i < nodo->cantidad && cantidad < capacidad; i++) {
        unsigned char byte = nodo->hijos[i].byte;
        size_t *fila_actual = filas[profundidad];
        size_t *fila_hija = filas[profundidad + 1];
        size_t minimo = fila_actual[0] + 1;

        palabra[profundidad] = (char)byte;
        fila_hija[0] = minimo;
        for (size_t j = 1; j <= longitud; j++) {
            size_t borrar = fila_actual[j] + 1;
            size_t insertar = fila_hija[j - 1] + 1;
            size_t sustituir = fila_actual[j - 1] +
                               (consulta[j - 1] != (char)byte);
            size_t costo = borrar < insertar ? borrar : insertar;
            fila_hija[j] = costo < sustituir ? costo : sustituir;
            if (fila_hija[j] < minimo) {
                minimo = fila_hija[j];
            }
        }

        if (minimo <= maximo) {
            cantidad = sugerir_rec(nodo->hijos[i].nodo, consulta, longitud,
                                   maximo, palabra, profundidad + 1, filas,
                                   resultados, capacidad, cantidad);
        }
    }
    return cantidad;
}

size_t trie_sugerir(const trie_nodo_t *raiz, const char *consulta,
                    size_t distancia_maxima, char resultados[][256],
                    size_t capacidad)
{
    if (raiz == NULL || consulta == NULL ||
        (resultados == NULL && capacidad != 0) || strlen(consulta) > 254) {
        return 0;
    }

    size_t filas[256][256] = {{0}};
    size_t longitud = strlen(consulta);
    char palabra[256];
    for (size_t i = 0; i <= longitud; i++) {
        filas[0][i] = i;
    }
    return sugerir_rec(raiz, consulta, longitud, distancia_maxima, palabra,
                       0, filas, resultados, capacidad, 0);
}

nodo_trie_t *trie_crear(void)
{
    return tp_nuevo();
}

bool trie_insertar(nodo_trie_t *raiz, const char *palabra)
{
    return raiz != NULL && palabra != NULL && strlen(palabra) <= 255 &&
           tp_insertar(raiz, palabra);
}

void trie_destruir(nodo_trie_t *raiz)
{
    tp_destruir(raiz);
}
