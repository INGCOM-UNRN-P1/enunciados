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

### 📋 Contrato de las Funciones

El programa debe estructurarse modularmente dividiendo las responsabilidades en funciones auxiliares claramente documentadas con pre y postcondiciones.

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
