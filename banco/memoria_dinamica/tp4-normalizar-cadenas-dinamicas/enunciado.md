- `recortar_espacios_dinamico`: recibe una cadena y retorna una copia en heap
  con los espacios iniciales y finales eliminados.
- `normalizar_mayusculas_dinamico`: retorna una copia en heap de la cadena con
  todos los caracteres en mayúsculas.
- Ambas funciones retornan `NULL` ante parámetros inválidos y el llamador es
  responsable de liberar la memoria.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
