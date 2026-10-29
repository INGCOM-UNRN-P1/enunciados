# Árbol Binario de Búsqueda (BST)

Implementar un Árbol Binario de Búsqueda (BST) para números enteros con operaciones recursivas.

Comandos:
- `INSERT <valor>`: Inserta el valor si no está duplicado.
- `INORDER`: Imprime los elementos en recorrido in-order (orden ascendente).
- `PREORDER`: Imprime los elementos en recorrido pre-order.
- `HEIGHT`: Imprime la altura del árbol (0 para árbol vacío, 1 para un solo nodo).
- `SEARCH <valor>`: Imprime `ENCONTRADO` o `NO_ENCONTRADO`.
- `EXIT`: Libera toda la memoria y finaliza.

### 📋 Contrato de las Funciones

```c
/*
 * Operación buscar_bst
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int buscar_bst(const NodoBST *raiz, int valor);

/*
 * Operación calcular_altura
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int calcular_altura(const NodoBST *raiz);

/*
 * Operación recorrido_inorder
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void recorrido_inorder(const NodoBST *raiz);

/*
 * Operación recorrido_preorder
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void recorrido_preorder(const NodoBST *raiz);

/*
 * Operación liberar_arbol
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void liberar_arbol(NodoBST *raiz);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Operación típica
```text
ADD 10, ADD 20
Estructura con 2 elementos
```
:::
:::{tab-item} Colección vacía
```text
Consulta sobre estructura recién inicializada
Retorno seguro / estado vacío
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Un nodo almacena `dato`, `izquierdo` y `derecho`.
- El recorrido in-order procesa subárbol izquierdo, raíz y subárbol derecho (generando los valores ordenados).
- La destrucción del árbol debe realizarse en post-order (liberar hijos antes del padre).
:::
