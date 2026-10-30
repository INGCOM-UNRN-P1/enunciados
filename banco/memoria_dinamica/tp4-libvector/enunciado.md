Biblioteca estática `libvector` de bloques dinámicos de enteros (`int *`, `int **`): tres funciones con prototipo provisto y dos a diseñar sin prototipo previo.

No pensado para ser resuelto con `struct` o `typedef`.

### 📋 Contrato de las Funciones

```c
int *crear_bloque_enteros(size_t cantidad);

void liberar_bloque_enteros(int **puntero_bloque);

int *redimensionar_bloque_enteros(int *bloque, size_t nueva_cantidad);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
