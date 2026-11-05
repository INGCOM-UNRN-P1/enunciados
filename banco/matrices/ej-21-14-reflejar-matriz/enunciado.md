Implementar dos funciones: una que refleje una matriz horizontalmente (la
primera fila se intercambia con la última, la segunda con la penúltima, etc.) y
otra que la refleje verticalmente (la primera columna con la última, etc.).

### 📋 Contrato de las Funciones

```c
int reflejar_matriz_horizontal(size_t filas, size_t columnas, int *matriz);
int reflejar_matriz_vertical(size_t filas, size_t columnas, int *matriz);
```

Requiere dimensiones positivas y espacio para `filas * columnas` enteros. Retorna `0` en éxito o `-1` si una dimensión es cero o el puntero es nulo. En esta consigna, el reflejo horizontal intercambia filas (eje horizontal) y el vertical intercambia columnas (eje vertical).

### 🧪 Ejemplos de Ejecución

Los casos definidos en `ejercicio.yaml` prueban la operación, dimensiones límite e índices o punteros inválidos.

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
