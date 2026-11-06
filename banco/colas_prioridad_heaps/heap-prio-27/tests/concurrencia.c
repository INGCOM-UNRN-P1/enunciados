#include "heap-prio-27.h"
#include <assert.h>
#include <threads.h>

typedef struct { concurrent_pq_t *cola; int base; } argumento_t;
static int productor(void *p) {
    argumento_t *a = p;
    for (int i = 0; i < 500; ++i)
        if (!concurrent_pq_push(a->cola, a->base + i)) return 1;
    return 0;
}
int main(void) {
    concurrent_pq_t cola;
    thrd_t hilos[4];
    argumento_t args[4];
    assert(concurrent_pq_init(&cola));
    for (int i = 0; i < 4; ++i) {
        args[i] = (argumento_t){&cola, i * 500};
        assert(thrd_create(&hilos[i], productor, &args[i]) == thrd_success);
    }
    for (int i = 0; i < 4; ++i) {
        int resultado;
        assert(thrd_join(hilos[i], &resultado) == thrd_success && resultado == 0);
    }
    for (int esperado = 0; esperado < 2000; ++esperado) {
        int valor;
        assert(concurrent_pq_try_pop(&cola, &valor) && valor == esperado);
    }
    int valor;
    assert(!concurrent_pq_try_pop(&cola, &valor));
    concurrent_pq_destroy(&cola);
    return 0;
}
