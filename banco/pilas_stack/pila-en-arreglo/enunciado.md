## Consigna

### Nivel 1: Problema Conceptual
Se necesita un mecanismo para gestionar el historial de acciones reversibles (*deshacer* / *undo*) de una interfaz de usuario embebida. El sistema registra las últimas acciones numéricas realizadas y debe permitir revertir inmediatamente la acción más reciente en tiempo constante $O(1)$, sin desplazar datos en memoria.

### Nivel 2: Especificación Abstracta del TDA Pila
La estructura debe comportarse como una **Pila Acotada (LIFO: Last-In, First-Out)** de capacidad fija con las siguientes reglas semánticas:
- **Apilar (`push`)**: Inserta un elemento en el extremo superior. Si la pila se encuentra llena, la operación falla y preserva intacto el contenido.
- **Desapilar (`pop`)**: Extrae y entrega el elemento situado en el tope. Si la pila se encuentra vacía, la operación falla y no altera el estado.
- **Invariante de representación**: El último valor ingresado es estrictamente el primero en ser desapilado.

### Nivel 3: Interfaz y Contratos de Funciones
Las operaciones a implementar sobre el TDA se definen según los siguientes contratos en C:

```c
bool pila_push(pila_t *pila, int valor);
bool pila_pop(pila_t *pila, int *valor);
```

- **`pila_push`**: Recibe un puntero a la pila y el valor a almacenar. Devuelve `true` si la inserción fue exitosa, o `false` en caso de desbordamiento (*overflow*).
- **`pila_pop`**: Recibe un puntero a la pila y un puntero de salida `valor`. Si la pila no está vacía, almacena en `*valor` el dato del tope, decrementa el contador y devuelve `true`. Devuelve `false` en caso de subdesbordamiento (*underflow*).

### Nivel 4: Representación Interna en Memoria y Estado
La pila se almacena sobre un bloque de memoria contigua de capacidad fija `CAPACIDAD = 5`. El campo entero `tope` representa el índice de la última celda ocupada (`tope == -1` denota pila vacía).

Estado inicial:

```estructura
type: stack
values: [14, 28, 45]
capacity: 5
topIndex: 2
baseAddr: 0x7FF0
```

Tras ejecutar `pila_pop(&p, &x)`, la variable `x` recibe `45` y `tope` se actualiza al índice `1`:

```estructura
type: stack
values: [14, 28]
capacity: 5
topIndex: 1
baseAddr: 0x7FF0
```

## Criterios de Aceptación

- [ ] `pila_push` sobre una pila llena devuelve `false` y no modifica los datos ni el tope.
- [ ] `pila_pop` sobre una pila vacía devuelve `false` y no accede a memoria fuera de rango.
- [ ] `pila_pop` escribe en `*valor` exactamente el dato del tope previo.
