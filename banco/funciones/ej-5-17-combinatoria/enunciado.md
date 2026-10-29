Implementá funciones modulares para el cálculo de combinatoria:
- `long long combinaciones(int n, int k);` — Calcula el número combinatorio $C(n, k) = \frac{n!}{k!(n-k)!}$.
- `long long permutaciones(int n, int k);` — Calcula las permutaciones $P(n, k) = \frac{n!}{(n-k)!}$.

**Orientación:**
- Optimizá el cálculo de $C(n, k)$ simplificando factores para evitar calcular factoriales completos que desborden rápidamente la representación entera.
- Utilizá el tipo `long long` para los resultados (y las operaciones intermedias).
- Si `k < 0` o `k > n`, retornar `0`. Si `k == 0` o `k == n`, $C(n, k) = 1$.
- Las funciones deben ser puras (sin llamadas a `printf` ni `scanf`, Regla 0x2002h).


---
(ejercicio_5_18)=

### 📋 Contrato de las Funciones

```c
/*
 * Calcula combinaciones C(n,k)
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long combinaciones(int n, int k);

/*
 * Calcula permutaciones P(n,k)
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long permutaciones(int n, int k);

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
