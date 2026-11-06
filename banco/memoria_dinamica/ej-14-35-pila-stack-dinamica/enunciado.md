# Pila dinámica

Implementá una pila de enteros con arreglo dinámico. `push` duplica la capacidad cuando se llena; `pop` reduce la capacidad a la mitad cuando el tamaño queda en un cuarto, sin bajar de la capacidad inicial. `peek` consulta el tope sin quitarlo. Rechazá punteros nulos, pop/peek sobre pila vacía y fallos de reserva sin perder el contenido.

```c
typedef struct { int *datos; size_t tamanio; size_t capacidad; } pila_t;
bool pila_inicializar(pila_t *p);
bool pila_push(pila_t *p, int valor);
bool pila_pop(pila_t *p, int *valor);
bool pila_peek(const pila_t *p, int *valor);
void pila_destruir(pila_t *p);
```
