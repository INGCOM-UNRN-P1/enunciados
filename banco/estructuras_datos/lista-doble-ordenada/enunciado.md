# Lista Doblemente Enlazada con Inserción Ordenada

## 📖 Consigna

Implementá un Tipo Abstracto de Datos (TAD) `ListaDoble` que administre una colección dinámica de números enteros, asegurando que los elementos se mantengan permanentemente ordenados de forma ascendente ante cada inserción.

La estructura debe mantener tanto un puntero al primer nodo (`cabeza`) como al último nodo (`cola`), permitiendo recorridos eficientes en ambos sentidos y optimizando las inserciones en los extremos.

El programa principal debe procesar comandos desde la entrada estándar:
- `ADD <valor>`: Inserta el entero conservando el orden relativo ascendente.
- `PRINT_ASC`: Imprime todos los elementos desde la cabeza a la cola separados por espacio, finalizando con salto de línea.
- `PRINT_DESC`: Imprime todos los elementos desde la cola a la cabeza separados por espacio, finalizando con salto de línea.
- `DEL <valor>`: Elimina la primera ocurrencia del valor si existe en la lista y reacomoda los enlaces.
- `EXIT`: Libera toda la memoria dinámica reservada y finaliza el programa.

---

## 📋 Prototipos y Contratos de las Funciones

```c
/*
 * Inicializa la lista doble seteando cabeza y cola en NULL.
 * Precondición: 'lista' apunta a una estructura ListaDoble válida en memoria.
 * Postcondición: lista->cabeza == NULL y lista->cola == NULL.
 */
void inicializar_lista(ListaDoble *lista);

/*
 * Inserta un valor entero manteniendo el orden ascendente de la lista.
 * Precondición: 'lista' apunta a una estructura inicializada.
 * Postcondición: Se reserva un nuevo nodo con malloc; se ubica en su posición
 *                correspondiente actualizando los punteros 'siguiente' y 'anterior'.
 */
void insertar_ordenado(ListaDoble *lista, int valor);

/*
 * Elimina la primera ocurrencia de 'valor' de la lista si existe.
 * Precondición: 'lista' inicializada.
 * Postcondición: Si el elemento existe, se desvincula de sus vecinos, se actualiza
 *                cabeza/cola si correspondía, y se libera la memoria con free().
 */
void eliminar_valor(ListaDoble *lista, int valor);

/*
 * Recorre la lista de cabeza a cola imprimiendo cada valor separado por espacio.
 */
void imprimir_ascendente(const ListaDoble *lista);

/*
 * Recorre la lista de cola a cabeza imprimiendo cada valor separado por espacio.
 */
void imprimir_descendente(const ListaDoble *lista);

/*
 * Libera secuencialmente todos los nodos dinámicos de la lista.
 * Postcondición: Toda la memoria heap es liberada; cabeza y cola quedan en NULL.
 */
void liberar_lista(ListaDoble *lista);
```

---

## 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Inserción y Recorridos
**Entrada:**
```text
ADD 30
ADD 10
ADD 20
PRINT_ASC
PRINT_DESC
EXIT
```

**Salida:**
```text
10 20 30
30 20 10
```
:::

:::{tab-item} Eliminación y Casos Borde
**Entrada:**
```text
ADD 50
DEL 50
PRINT_ASC
ADD 15
ADD 15
DEL 15
PRINT_ASC
EXIT
```

**Salida:**
```text
(línea vacía o lista vacía)
15
```
:::
::::

---

## ⚠️ Precondiciones y Casos Borde

1. **Punteros nulos:** Las funciones deben verificar que el puntero `lista != NULL` antes de desreferenciar.
2. **Fallo de memoria:** En `insertar_ordenado`, verificar siempre que el valor retornado por `malloc` no sea `NULL`.
3. **Lista vacía:** `PRINT_ASC` y `PRINT_DESC` en una lista vacía deben emitir un salto de línea sin generar fallos de segmentación.
4. **Inserción en extremos:**
   - Si el nuevo valor es menor o igual al dato de la cabeza, pasa a ser la nueva cabeza.
   - Si el nuevo valor es mayor o igual al dato de la cola, pasa a ser la nueva cola.
5. **Eliminación del único elemento:** Al eliminar el único nodo de la lista, tanto `cabeza` como `cola` deben quedar en `NULL`.
6. **Elementos duplicados:** La lista debe admitir elementos con el mismo valor numérico manteniendo el orden relativo.

---

## 🎯 Criterios de Aceptación

- [ ] Las inserciones mantienen invariantemente el orden ascendente: para todo nodo $i$, $i->dato \le i->siguiente->dato$.
- [ ] La navegación bidireccional (`PRINT_ASC` y `PRINT_DESC`) es consistente en todo momento.
- [ ] No existen fugas de memoria (*memory leaks*) al procesar `EXIT` (verificable con Valgrind: 0 bytes en uso).
- [ ] El programa no sufre desbordes de buffer ni desreferenciación de punteros colgantes (*dangling pointers*).
