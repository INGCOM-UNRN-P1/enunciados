Manejar un arreglo dinámico de cadenas (`char **lista`) donde cada elemento es
una cadena independiente en heap.

- `lista_cadenas_crear(void)`: retorna un `char **` apuntando a un arreglo vacío
  (o `NULL`).
- `lista_cadenas_agregar(char ***lista, size_t *cantidad, const char *cadena)`:
  duplica la cadena y la agrega al final, redimensionando con `realloc`.
- `lista_cadenas_destruir(char **lista, size_t cantidad)`: libera cada cadena y
  luego el arreglo.

> [!NOTE] `char **` es el tipo de `argv` en `main(int argc, char **argv)`. Este
> ejercicio generaliza ese patrón.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
