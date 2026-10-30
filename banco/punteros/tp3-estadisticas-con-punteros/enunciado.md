- **Archivos**: `ejercicios/ejercicio2/`
- **Consigna**:
  - `calcular_estadisticas`: Recibe
    `const int *arreglo, size_t cantidad, int *minimo, int *maximo, double *promedio`.
    Emplea `obtener_min_max` de `libpunteros` para determinar extremos y acumula
    con aritmética de punteros para calcular el promedio.
  - `contar_en_rango`: Recibe
    `const int *arreglo, size_t cantidad, int limite_inf, int limite_sup, size_t *coincidencias`.
    Cuenta elementos en el intervalo cerrado `[limite_inf, limite_sup]` usando
    aritmética de punteros.
- **Tests provistos**:
  [`ejercicios/ejercicio2/prueba.c`](ejercicios/ejercicio2/prueba.c).

Usa la biblioteca del ejercicio `tp3-libpunteros`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
