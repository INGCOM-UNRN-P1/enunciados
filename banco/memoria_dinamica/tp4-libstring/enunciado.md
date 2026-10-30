Biblioteca estática `libstring` de cadenas dinámicas en heap (`char *`, `char **`): tres funciones con prototipo provisto y dos a diseñar sin prototipo previo.

No pensado para ser resuelto con `struct` o `typedef`.

### 📋 Contrato de las Funciones

```c
char *cadena_duplicar_segura(const char *origen, size_t capacidad_max);

char *cadena_unir_dinamica(const char *primera, size_t cap_primera,
                           const char *segunda, size_t cap_segunda);

void cadena_liberar_segura(char **puntero_cadena);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
