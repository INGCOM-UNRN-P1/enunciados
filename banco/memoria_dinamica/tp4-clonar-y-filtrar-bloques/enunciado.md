- `clonar_bloque`: recibe un `const int *` de tamaño `n` y retorna una copia
  exacta en heap (`malloc`). Retorna `NULL` si el puntero es `NULL` o `n == 0`.
- `filtrar_bloque_positivos`: recibe un `const int *` de tamaño `n` y retorna un
  nuevo bloque solo con los elementos > 0, almacenando la cantidad resultante en
  un parámetro de salida `size_t *`. Retorna `NULL` si no hay elementos
  positivos.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
