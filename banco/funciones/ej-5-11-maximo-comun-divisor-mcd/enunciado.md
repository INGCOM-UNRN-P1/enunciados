Implementá el algoritmo de Euclides para calcular MCD.

**Algoritmo:**


```
mcd(a, b) = mcd(b, a % b)  si b != 0
mcd(a, 0) = a
```

**Orientación:**
- Implementá versión recursiva e iterativa
- Agregá función `mcm(a, b)` usando: mcm = (a * b) / mcd(a, b)

---
(ejercicio_5_12)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Máximo Común Divisor (MCD)
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_11(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
