- `invertir_cadena_dinamico`: retorna en heap una nueva cadena con los
  caracteres en orden inverso.
- `partir_por_delimitador`: recibe una cadena y un carácter delimitador; retorna
  un `char **` con los tokens separados por ese delimitador y almacena la
  cantidad en un parámetro de salida `size_t *`. Cada token es una cadena
  independiente en heap.
- Diseñar prototipos en el `.h`, implementar en el `.c`, demostrar en `main.c` y
  agregar suite en `prueba.c`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
