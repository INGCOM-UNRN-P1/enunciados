- **Archivos**: `ejercicios/ejercicio1/`
- **Consigna**:
  - `ordenar_par`: Recibe `int *menor` e `int *mayor`. Asegura
    `*menor <= *mayor` delegando el intercambio en `intercambiar` de
    `libpunteros`.
  - `ordenar_tria`: Recibe tres punteros `int *a, int *b, int *c` y los ordena
    ascendentemente apoyándose en `ordenar_par` e `intercambiar`.
  - `sumar_acumulado`: Recibe
    `const int *arreglo, size_t cantidad, long long *resultado`. Recorre el
    arreglo estrictamente con aritmética de punteros y retorna `true` si guardó
    la suma en `*resultado`, o `false` ante punteros nulos.
- **Tests provistos**:
  [`ejercicios/ejercicio1/prueba.c`](ejercicios/ejercicio1/prueba.c).

Usa la biblioteca del ejercicio `tp3-libpunteros`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
