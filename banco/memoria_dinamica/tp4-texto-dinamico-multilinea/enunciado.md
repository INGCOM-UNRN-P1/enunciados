Leer líneas de texto desde `stdin` (sin saber cuántas hay de antemano),
almacenarlas dinámicamente y procesarlas:

- Leer líneas con `fgets` en un buffer fijo y duplicarlas en heap con `strdup` o
  equivalente.
- Acumular las líneas en un `char **` redimensionable.
- Filtrar y mostrar solo las líneas que contengan una subcadena dada.
- Liberar toda la memoria al terminar.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
