Simular una matriz de `filas × columnas` enteros usando un único bloque contiguo
`int *`, donde el elemento `(i, j)` se accede como `bloque[i * columnas + j]`.

- `crear_matriz_plana(size_t filas, size_t columnas)`: reserva el bloque en
  heap, inicializado en cero.
- `obtener_celda(const int *m, size_t columnas, size_t fila, size_t col)`:
  retorna el valor de la celda.
- `asignar_celda(int *m, size_t columnas, size_t fila, size_t col, int valor)`:
  escribe el valor.
- `liberar_matriz_plana(int *m)`: libera el bloque.

> [!NOTE] Este ejercicio es el precursor conceptual de `libmatrices` del TP7,
> donde se agrega una capa de punteros de fila (`int **filas`) para permitir
> notación `m[i][j]`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
