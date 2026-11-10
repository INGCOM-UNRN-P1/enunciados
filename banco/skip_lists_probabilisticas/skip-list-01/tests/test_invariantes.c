#include "../skip-list-01.h"
#include <assert.h>
#include <stdint.h>
int main(void) {
    skip_list_t l;
    bool presente[201] = {false};
    uint32_t estado = 7;
    skip_list_init(&l, 1);
    assert(l.head);
    for (int paso = 0; paso < 6000; ++paso) {
        estado = estado * 1664525u + 1013904223u;
        int clave = (int)(estado % 201u) - 100;
        size_t indice = (size_t)(clave + 100);
        if (estado & 0x100u) {
            assert(skip_list_insert(&l, clave) == !presente[indice]);
            presente[indice] = true;
        } else {
            assert(skip_list_remove(&l, clave) == presente[indice]);
            presente[indice] = false;
        }
        size_t n = 0;
        const skip_node_t *p = l.head->next[0], *ultimo = NULL;
        for (int i = 0; i < 201; ++i) {
            assert(skip_list_contains(&l, i - 100) == presente[i]);
            if (presente[i]) {
                assert(p && p->value == i - 100);
                ultimo = p;
                p = p->next[0];
                ++n;
            }
        }
        assert(!p && l.tail == ultimo && l.length == n);
        for (size_t altura = 1; altura < l.level; ++altura) {
            const skip_node_t *actual = l.head->next[altura];
            const skip_node_t *anterior = NULL;
            while (actual) {
                assert(actual->height > altura);
                if (anterior) assert(anterior->value < actual->value);
                anterior = actual;
                actual = actual->next[altura];
            }
        }
    }
    skip_list_destroy(&l);
}
