/*
 * Trie #25
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>


int ejecutar_trie_pref_25(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char pref[32] = {0};
    if (scanf("%31s", pref) == 1) {
        size_t len = strlen(pref);
        printf("TRIE_%02d_LEN: %zu\n", 25, len + 25);
    }
    return 0;
}