## Consigna

### Nivel 1: Problema Conceptual
Un motor de indexación de base de datos en memoria requiere almacenar claves numéricas únicas y resolver consultas de pertenencia en tiempo logarítmico proporcional a la altura de la estructura. No se admiten claves duplicadas y al finalizar el servicio se debe desmantelar el índice completo liberando toda la memoria dinámica asignada.

### Nivel 2: Especificación Abstracta del TDA Árbol Binario de Búsqueda
Se define el tipo abstracto **Árbol Binario de Búsqueda (ABB)**:
- **`abb_insertar`**: Agrega una clave al árbol manteniendo la invariante de orden: para cada nodo con clave $K$, todas las claves del subárbol izquierdo son menores que $K$ y las del subárbol derecho son mayores que $K$. Si la clave ya existía, no se inserta y se notifica el rechazo.
- **`abb_buscar`**: Determina de forma eficiente si una clave específica está presente en el árbol.
- **`abb_destruir`**: Libera todos los nodos mediante un recorrido en postorden (hijo izquierdo, hijo derecho, raíz) para no perder referencias a los subárboles durante la desasignación, dejando el puntero raíz en `NULL`.

### Nivel 3: Interfaz y Contratos de Funciones
Las funciones se definen con las siguientes declaraciones en C:

```c
bool abb_insertar(nodo_abb_t **raiz, int clave);
bool abb_buscar(const nodo_abb_t *raiz, int clave);
void abb_destruir(nodo_abb_t **raiz);
```

- **`abb_insertar`**: Recibe la dirección del puntero a la raíz (`nodo_abb_t **`). Si `*raiz == NULL`, aloja el nuevo nodo en el heap, inicializa sus punteros hijos en `NULL` y retorna `true`. Si `clave == (*raiz)->clave`, retorna `false`. Si es menor o mayor, delega recursivamente en el subárbol izquierdo o derecho.
- **`abb_buscar`**: Retorna `false` si el árbol está vacío. Si `clave == raiz->clave`, retorna `true`. En otro caso, busca recursivamente según corresponda.
- **`abb_destruir`**: Si `*raiz == NULL`, no hace nada. De lo contrario, destruye recursivamente ambos subárboles, invoca `free(*raiz)` y asigna `*raiz = NULL`.

### Nivel 4: Representación Interna en Memoria y Estado
Cada nodo del ABB está representado por la siguiente estructura dinámica:

```c
typedef struct nodo_abb {
    int clave;
    struct nodo_abb *izq;
    struct nodo_abb *der;
} nodo_abb_t;
```

Estado del árbol tras insertar las claves `50`, `30`, `70`, `20`, `40`:

```estructura
type: tree
variant: bst
insert: [50, 30, 70, 20, 40]
```

Si posteriormente se invoca `abb_insertar(&raiz, 25)`:
- El nodo con clave `25` se enlaza como hijo derecho del nodo `20`.
- Una invocación posterior de `abb_buscar(raiz, 25)` retornará `true`.
- Una invocación de `abb_insertar(&raiz, 30)` retornará `false` por clave duplicada.

## Criterios de Aceptación

- [ ] `abb_insertar` asigna memoria dinámica solo cuando la clave es nueva.
- [ ] `abb_insertar` rechaza claves duplicadas retornando `false` sin modificar el árbol.
- [ ] `abb_buscar` opera en $O(h)$ sin recorrer ramas innecesarias.
- [ ] `abb_destruir` libera todos los nodos en postorden y fija `*raiz = NULL`.
