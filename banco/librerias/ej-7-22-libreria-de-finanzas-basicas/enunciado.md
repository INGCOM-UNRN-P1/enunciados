Creá `finanzas.h` y `finanzas.c`:
- `double fin_interes_simple(double capital, double tasa, double tiempo)`
- `double fin_interes_compuesto(double capital, double tasa, int periodos)`
- `double fin_cuota_prestamo(double capital, double tasa_mensual, int meses)`
- `double fin_valor_futuro_anualidad(double cuota, double tasa, int periodos)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Finanzas Básicas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__de_finanzas_basicas(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
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
- Usá `pow()` de `<math.h>` para los cálculos con exponencial.
:::
