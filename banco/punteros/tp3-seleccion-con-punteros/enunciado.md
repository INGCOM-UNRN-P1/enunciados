- **Archivos**: `ejercicios/ejercicio6/`
- **Consigna**:
  - `buscar_puntero_minimo`: Recorre un rango acotado por punteros
    (`[inicio, fin)`) y retorna el puntero al elemento mínimo.
  - `ordenar_seleccion_punteros`: Implementa el algoritmo Selection Sort
    ordenando in-place mediante aritmética de punteros e `intercambiar`.
- **Responsabilidad del alumno**: Prototipos y documentación en
  `ordenamiento.h`, lógica en `ordenamiento.c`, demostración en `main.c` y suite
  en `prueba.c`.

Usa la biblioteca del ejercicio `tp3-libpunteros`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
