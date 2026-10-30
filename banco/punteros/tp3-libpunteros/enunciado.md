En el estándar C11, los arreglos y los punteros están íntimamente ligados por la
regla de decaimiento (_array-to-pointer decay_): el nombre de un arreglo evalúa
a la dirección en memoria de su primer elemento. No obstante, un puntero es una
variable independiente capaz de direccionamiento directo y cálculos aritméticos
en unidades escaladas por el tamaño del tipo apuntado (`sizeof(*p)`).

El propósito de este Trabajo Práctico es dominar el modelo de memoria de C,
pasando de la indexación estática al uso riguroso de:

- Paso por referencia para mutación de variables (`int *a`).
- Parámetros de salida para retornos múltiples
  (`bool fn(..., int *minimo, int *maximo)`).
- Aritmética de punteros pura (`p++`, `*p`, `fin - inicio`).
- _Const-correctness_ en punteros de solo lectura (`const int *`,
  `const char *`).
- Navegación y manipulación de cadenas seguras en memoria contigua.

Contiene primitivas fundamentales de manipulación por referencia y recorrido de
arreglos disponibles para todo el proyecto.

### `intercambiar`

- **Firma provista**:
  ```c
  void intercambiar(int *primer, int *segundo);
  ```
- **Consigna**: Intercambia los contenidos de dos variables enteras recibidas
  por referencia a través de punteros.
- **Casos borde**: Si algún puntero es `NULL`, no produce ningún efecto. Si
  ambos punteros son iguales, el valor se preserva.

### `obtener_min_max`

- **Firma provista**:
  ```c
  bool obtener_min_max(const int *arreglo, size_t cantidad, int *minimo, int *maximo);
  ```
- **Consigna**: Determina el mínimo y máximo de un arreglo de enteros
  recorriéndolo estrictamente con aritmética de punteros, escribiendo los
  resultados en `*minimo` y `*maximo`.
- **Casos borde**: Retorna `false` si `arreglo == NULL`, `cantidad == 0` o si
  alguno de los punteros de salida es `NULL`. Retorna `true` ante éxito.
- **Suite provista**: [`libs/punteros/prueba.c`](libs/punteros/prueba.c).

### 📋 Contrato de las Funciones

```c
void intercambiar(int *primer, int *segundo);

bool obtener_min_max(const int *arreglo, size_t cantidad, int *minimo, int *maximo);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
