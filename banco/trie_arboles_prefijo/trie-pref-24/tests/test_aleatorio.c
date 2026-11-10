#include "../trie-pref-24.h"
#include <assert.h>
#include <stdint.h>
#include <string.h>
int main(void) {
    uint32_t estado = 41;
    for (int ronda = 0; ronda < 300; ++ronda) {
        char texto[32], consulta[8];
        estado = estado * 1664525u + 1013904223u;
        size_t n = estado % 31u;
        for (size_t i = 0; i < n; ++i) {
            estado = estado * 1664525u + 1013904223u;
            texto[i] = (char)((estado & 1u) ? 0xe1u : 'a' + (estado >> 16) % 3u);
        }
        texto[n] = '\0';
        arbol_sufijos_t t;
        assert(arbol_sufijos_crear(&t, texto));
        for (int ensayo = 0; ensayo < 80; ++ensayo) {
            estado = estado * 1664525u + 1013904223u;
            size_t m = estado % 7u;
            for (size_t i = 0; i < m; ++i) {
                estado = estado * 1664525u + 1013904223u;
                consulta[i] = (char)((estado & 1u) ? 0xe1u : 'a' + (estado >> 16) % 3u);
            }
            consulta[m] = '\0';
            assert(arbol_sufijos_contiene(&t, consulta) == (strstr(texto, consulta) != NULL));
        }
        arbol_sufijos_destruir(&t);
    }
}
