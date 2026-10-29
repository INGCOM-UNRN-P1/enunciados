# Ejercicio 3: TDA Conjunto de Enteros (`conjunto_t`) — Invariante de Unicidad

Implementar un Tipo de Dato Abstracto que modele un conjunto matemático finito de números enteros con capacidad máxima establecida al crearse. En un conjunto no existen elementos repetidos ni importa el orden de inserción.

## 1. El Invariante de Representación

En `conjunto.c`, la función `static bool conjunto_invariante(const conjunto_t *c)` debe verificar:
1. `c != NULL`.
2. `c->elementos != NULL`.
3. `c->cardinal <= c->capacidad`.
4. Invariante de unicidad: para todo par de índices válidos $0 \le i < j < \text{cardinal}$, se cumple que `c->elementos[i] != c->elementos[j]`.

## 2. Interfaz requerida (`conjunto.h`)

- **Constructor:** `conjunto_t *conjunto_crear(size_t capacidad);`
- **Destructor:** `void conjunto_destruir(conjunto_t *c);`
- **Consultores:**
  - `size_t conjunto_cardinal(const conjunto_t *c);`
  - `bool conjunto_esta_vacio(const conjunto_t *c);`
  - `bool conjunto_pertenece(const conjunto_t *c, int elemento);`
  - `bool conjunto_es_subconjunto(const conjunto_t *a, const conjunto_t *b);`
- **Mutadores:**
  - `bool conjunto_agregar(conjunto_t *c, int elemento);` (idempotente: si ya existe retorna true sin duplicar; retorna false si está lleno).
  - `bool conjunto_eliminar(conjunto_t *c, int elemento);` (mantiene contigüidad por corrimiento).
- **Operaciones:**
  - `conjunto_t *conjunto_union(const conjunto_t *a, const conjunto_t *b);`
  - `conjunto_t *conjunto_interseccion(const conjunto_t *a, const conjunto_t *b);`
