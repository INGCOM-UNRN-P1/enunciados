**Identificador:** `ejercicio2` | **Módulo:** Práctica 1

---

El objetivo es mostrar una secuencia de números enteros que comienza en un número $n$ y termina justo antes de un número $m$. Esto corresponde al intervalo matemático $[n, m)$.

---

- **Entrada (`stdin`):** Dos números enteros $n$ y $m$ separados por espacio o salto de línea.
- **Salida (`stdout`):** La secuencia de números enteros en el intervalo $[n, m)$, imprimiendo un número por línea. Si $n \ge m$, no se imprime ningún número.

---

```text
Entrada:
3 7

Salida:
3
4
5
6
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Secuencia Ascendente
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_secuencia_ascendente(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
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

:::{hint} Consideraciones Didácticas
- El intervalo [n, m) es semiabierto: incluye n y excluye m.
- Si la condición inicial n < m no se cumple, el bucle no debe iterar.
:::
