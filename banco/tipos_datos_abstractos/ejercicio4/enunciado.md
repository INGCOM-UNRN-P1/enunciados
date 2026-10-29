# Ejercicio 4: TDA Secuencia (`secuencia_t`) — Intercambiabilidad Arreglo / Lista Enlazada

Se desea modelar un Tipo de Dato Abstracto general de secuencia lineal de enteros que permita acceso posicional e inserciones/eliminaciones intermedias.

## 1. Interfaz requerida (`secuencia.h`)

- **Constructor:** `secuencia_t *secuencia_crear(size_t capacidad);`
- **Destructor:** `void secuencia_destruir(secuencia_t *s);`
- **Selector:** `bool secuencia_obtener(const secuencia_t *sec, size_t indice, int *destino);`
- **Consultores:**
  - `size_t secuencia_largo(const secuencia_t *sec);`
  - `bool secuencia_esta_vacia(const secuencia_t *sec);`
- **Mutadores:**
  - `bool secuencia_insertar(secuencia_t *sec, size_t pos, int valor);`
  - `bool secuencia_eliminar(secuencia_t *sec, size_t pos, int *dato_extraido);`
- **Conversor:**
  - `char *secuencia_a_cadena(const secuencia_t *sec);` (formato `"[10, 20, 30]"` en heap, `free()` a cargo del llamador).

## 2. Dos implementaciones intercambiables

1. **Implementación sobre Arreglo Dinámico (`secuencia_arreglo.c`):** Almacena los datos en memoria contigua (`int *datos`, `size_t cantidad`, `size_t capacidad`). Invariante: `s != NULL && s->datos != NULL && s->capacidad > 0 && s->cantidad <= s->capacidad`.
2. **Implementación sobre Lista Enlazada (`secuencia_lista.c`):** Almacena los datos mediante una cadena de nodos simples (`struct nodo { int valor; struct nodo *siguiente; }`). Invariante: `s != NULL && s->capacidad > 0 && s->cantidad <= s->capacidad` y la cantidad de nodos coincide con `s->cantidad`.
