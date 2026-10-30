- **Archivos**: `ejercicios/ejercicio5/`
- **Complementario al TP2**: Reimplementar con aritmética de punteros (sin `[]`)
  las siguientes funciones equivalentes a las de `libcadenas` del TP2:
  - `copiar_con_punteros(char *dest, size_t cap, const char *src)`: equivalente
    a `cadena_copiar`.
  - `concatenar_con_punteros(char *dest, size_t cap, const char *src)`:
    equivalente a `cadena_concatenar`.
  - `longitud_con_punteros(const char *s, size_t cap)`: equivalente a
    `cadena_longitud`. Contratos, firma y documentación en `puntero_cadena.h`.
    El objetivo es contrastar la implementación con índices del TP2 vs. la
    implementación con punteros.
- **Responsabilidad del alumno**: Prototipos y documentación en
  `puntero_cadena.h`, lógica en `puntero_cadena.c`, demostración en `main.c` y
  suite en `prueba.c`.

Usa la biblioteca del ejercicio `tp3-libpunteros`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
