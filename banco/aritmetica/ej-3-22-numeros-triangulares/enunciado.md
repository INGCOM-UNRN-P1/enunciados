#### Descripción

Implementá una función que determine si un entero no negativo es triangular,
es decir, si es igual a `1 + 2 + ... + k` para algún `k >= 0`. También
implementá una función que genere los primeros `cantidad` términos, comenzando
por `T_1 = 1` (la lista vacía corresponde a cantidad cero). Para reconocer el
cero, considerá `T_0 = 0` triangular.

### Contrato

```c
/* Devuelve true si n es triangular; los negativos no lo son. */
bool es_triangular(int64_t n);

/* Escribe los primeros cantidad términos en salida.
 * Devuelve true si la capacidad alcanza y todos los términos caben en int64_t.
 * Para cantidad cero puede pasarse salida == NULL y capacidad == 0.
 */
bool generar_triangulares(size_t cantidad, int64_t *salida, size_t capacidad);
```

La generación falla sin escribir si `cantidad > capacidad`, si `salida` es
`NULL` con cantidad positiva o si el término solicitado excede `INT64_MAX`.
Usá comprobaciones antes de multiplicar o sumar para evitar desbordamientos.

### Ejemplos

- `es_triangular(10)` devuelve `true`; `es_triangular(8)` devuelve `false`.
- `generar_triangulares(5, salida, 5)` escribe `1, 3, 6, 10, 15`.
- `es_triangular(0)` devuelve `true`; los valores negativos devuelven `false`.

### Criterios de aceptación

- La detección puede usar la suma iterativa o la propiedad de que `8*n + 1` es
  un cuadrado perfecto, con operaciones protegidas contra desbordamiento.
- La generación produce los primeros `N` números triangulares en orden.
- Compila en C11 con `-Wall -Wextra -Werror`.
