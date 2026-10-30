Unir dos cadenas de texto intercalando un separador en un búfer destino
seguro de tamaño acotado por 'capacidad', utilizando las funciones de
copia y concatenación provistas por libcadenas.

Usa la biblioteca del ejercicio `tp2-libcadenas`.

### 📋 Contrato de las Funciones

```c
bool unir_con_separador(char destino[],
                        size_t capacidad,
                        const char primero[],
                        const char segundo[],
                        const char separador[]);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
