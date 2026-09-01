/*
 * Trie #10
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>


int ejecutar_trie_pref_10(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char pref[32] = {0};
    if (scanf("%31s", pref) == 1) {
        size_t len = strlen(pref);
        printf("TRIE_%02d_LEN: %zu\n", 10, len + 10);
    }
    return 0;
}