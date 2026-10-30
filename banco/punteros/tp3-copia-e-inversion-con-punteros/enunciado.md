- **Archivos**: `ejercicios/ejercicio3/`
- **Consigna**:
  - `copiar_arreglo`: Copia todos los elementos de un arreglo fuente a un
    arreglo destino de igual o mayor tamaño, usando exclusivamente aritmética de
    punteros (sin `[]`). Establecé las precondiciones de los punteros en el
    `.h`.
  - `invertir_arreglo`: Invierte in-place un arreglo empleando dos punteros que
    convergen desde los extremos, reutilizando `intercambiar`.
- **Responsabilidad del alumno**: Prototipos y documentación en `recorrido.h`,
  lógica en `recorrido.c`, demostración en `main.c` y suite en `prueba.c`.

Usa la biblioteca del ejercicio `tp3-libpunteros`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
