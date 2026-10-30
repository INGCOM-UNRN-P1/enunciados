Calculadora estadística de procesamiento secuencial en flujo continuo (sin
almacenamiento en arreglos).

- `estadistica.h` / `estadistica.c`: Funciones `calcular_promedio`,
  `actualizar_minimo` y `actualizar_maximo`.
- `main.c`: Solicita la cantidad $N > 0$, itera leyendo cada número para
  actualizar acumuladores en $O(1)$ de memoria, y presenta suma, promedio,
  mínimo y máximo.

### 📋 Contrato de las Funciones

```c
/*
 * Calcula el promedio a partir de una suma acumulada y la cantidad
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float calcular_promedio(float suma, int cantidad);

/*
 * Actualiza el valor mínimo comparándolo con un nuevo valor.
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
float actualizar_minimo(float actual_min, float nuevo_valor);

/*
 * Actualiza el valor máximo comparándolo con un nuevo valor.
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
float actualizar_maximo(float actual_max, float nuevo_valor);

```

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

:::{hint} Consideraciones Didácticas
- Procesá los números a medida que ingresan en una única pasada; no uses arreglos.
- Inicializá el mínimo y el máximo con el primer valor ingresado (índice 0) para contemplar series puramente negativas.
- El promedio es la división entre la suma acumulada y la cantidad de elementos ingresados convertida a float.
:::
