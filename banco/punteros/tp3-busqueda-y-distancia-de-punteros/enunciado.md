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

Las funciones reciben los siguientes parámetros:

```c
const int *buscar_primero(const int *arreglo, size_t cantidad, int buscado);
int distancia_punteros(const int *inicio, const int *elemento);
```

`buscar_primero` devuelve `NULL` si `arreglo` es nulo, la cantidad es cero o
el valor no aparece; si aparece varias veces, devuelve la primera posición.
Para `distancia_punteros`, los punteros no nulos deben apuntar al mismo arreglo
o a una posición inmediatamente posterior; devuelve -1 ante un puntero nulo,
una distancia negativa o una distancia que no cabe en `int`.
