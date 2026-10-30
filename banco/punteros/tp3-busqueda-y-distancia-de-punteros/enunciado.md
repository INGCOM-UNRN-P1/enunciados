- **Archivos**: `ejercicios/ejercicio4/`
- **Consigna**:
  - `buscar_primero`: Retorna un puntero a la primera ocurrencia de un valor
    (`const int *`), o `NULL` si no existe.
  - `distancia_punteros`: Determina el índice relativo calculando la resta de
    punteros (`elemento - inicio`).
- **Responsabilidad del alumno**: Prototipos y documentación en `busqueda.h`,
  lógica en `busqueda.c`, demostración en `main.c` y suite en `prueba.c`.

> [!NOTE] Comparar `buscar_primero` con `buscar_puntero_minimo` (Ej6): ambos
> recorren el arreglo con punteros, pero `buscar_primero` termina al encontrar
> el valor buscado (cortocircuito), mientras que `buscar_puntero_minimo` siempre
> recorre el rango completo. ¿Cuál es la diferencia en complejidad promedio vs.
> peor caso?

Usa la biblioteca del ejercicio `tp3-libpunteros`.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
