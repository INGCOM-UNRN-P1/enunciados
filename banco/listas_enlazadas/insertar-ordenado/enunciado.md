## Consigna

### Nivel 1: Problema Conceptual
Un módulo de monitoreo registra mediciones escalares provenientes de sensores industriales. Para generar reportes estadísticos sin sobrecarga de cómputo posterior, cada nueva medición debe incorporarse en su posición de orden ascendente en el momento exacto en que arriba, evitando reordenamientos periódicos de toda la colección.

### Nivel 2: Especificación Abstracta del TDA Lista Ordenada
Se requiere mantener una **Lista Simplemente Enlazada Ordenada**:
- **Inserción ordenada**: Añade un elemento garantizando que todos los elementos predecesores sean menores o iguales al nuevo valor, y los sucesores sean mayores o iguales.
- **Manejo dinámico**: Cada nodo debe alojarse dinámicamente en el heap según necesidad.
- **Casos borde**: Inserción en lista vacía, inserción en la cabeza (nuevo valor mínimo) e inserción al final (nuevo valor máximo).

### Nivel 3: Interfaz y Contratos de Funciones
La operación se define con la siguiente firma en C:

```c
bool insertar_ordenado(nodo_t **cabeza, int valor);
```

- **`cabeza`**: Puntero al puntero de inicio de la lista (`nodo_t **`), permitiendo reasignar la cabeza de forma transparente cuando el nuevo elemento deba quedar al principio.
- **`valor`**: Dato entero a almacenar en el nuevo nodo.
- **Retorno**: Devuelve `true` si se pudo reservar memoria e insertar el nodo; devuelve `false` si `malloc` falla.

### Nivel 4: Representación Interna en Memoria y Estado
Cada elemento de la lista está representado por un nodo en el heap que contiene el campo entero `dato` y un puntero `sig` al siguiente nodo (o `NULL` si es el último).

Estado inicial:

```estructura
type: linked_list
variant: singly
values: [10, 20, 40]
addresses: [0x3B20, 0x7E10, 0x2140]
```

Después de `insertar_ordenado(&cabeza, 30)` (el nuevo nodo se aloja en `0x5A00`):

```estructura
type: linked_list
variant: singly
values: [10, 20, 30, 40]
addresses: [0x3B20, 0x7E10, 0x5A00, 0x2140]
```

:::{tip} Ayuda
Recorré con `nodo_t **actual = cabeza;` mientras `*actual != NULL && (*actual)->dato < valor`.
:::

## Criterios de Aceptación

- [ ] Inserta correctamente al inicio de una lista vacía y actualiza `*cabeza`.
- [ ] Inserta correctamente antes del primer nodo si `valor` es menor que el dato inicial.
- [ ] Preserva los enlaces anteriores y posteriores sin provocar fugas de memoria.
- [ ] Verifica que el puntero retornado por `malloc` no sea `NULL`.
