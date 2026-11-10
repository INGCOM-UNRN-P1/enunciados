#include "../trie-pref-21.h"
#include <assert.h>
#include <stdint.h>
#include <string.h>
static int palindromo(const char *s, size_t a, size_t b) {
    while (a < b) if (s[a++] != s[b--]) return 0;
    return 1;
}
int main(void) {
    uint32_t estado = 19;
    for (int ronda = 0; ronda < 3000; ++ronda) {
        char texto[40], salida[40];
        estado = estado * 1664525u + 1013904223u;
        size_t n = estado % 39u;
        for (size_t i = 0; i < n; ++i) {
            estado = estado * 1664525u + 1013904223u;
            texto[i] = (char)('a' + (estado >> 16) % 4u);
        }
        texto[n] = '\0';
        size_t mejor = 0, inicio = 0;
        for (size_t i = 0; i < n; ++i)
            for (size_t j = i; j < n; ++j)
                if (j - i + 1 > mejor && palindromo(texto, i, j)) {
                    mejor = j - i + 1;
                    inicio = i;
                }
        assert(trie_palindromo_mas_largo(texto, salida, mejor + 1) == mejor);
        assert(strlen(salida) == mejor && !memcmp(salida, texto + inicio, mejor));
        if (mejor) assert(trie_palindromo_mas_largo(texto, salida, mejor) == 0 && salida[0] == '\0');
    }
}
