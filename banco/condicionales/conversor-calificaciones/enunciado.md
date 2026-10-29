**Identificador:** `ejercicio7` | **Módulo:** Práctica 1

---

Convertí una calificación numérica decimal en escala de $0$ a $10$ a su correspondiente letra estándar (A, B, C, D, F) y su porcentaje equivalente ($0\% - 100\%$).

### Escala de Equivalencias:
- **$[9.0, 10.0]$:** Calificación `A` ($90\% - 100\%$)
- **$[8.0, 9.0)$:** Calificación `B` ($80\% - 89\%$)
- **$[7.0, 8.0)$:** Calificación `C` ($70\% - 79\%$)
- **$[6.0, 7.0)$:** Calificación `D` ($60\% - 69\%$)
- **$[0.0, 6.0)$:** Calificación `F` ($< 60\%$)

---

- **Entrada (`stdin`):** Un número de punto flotante entre $0.0$ y $10.0$.
- **Salida (`stdout`):** La letra de calificación asignada seguida del porcentaje calculado en formato entero (ej. `A (95%)`).

---

```text
Entrada:
9.5

Salida:
A (95%)
```

```text
Entrada:
4.0

Salida:
F (40%)
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conversor de Calificaciones
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ersor_calificaciones(int val);

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
- Evaluá los límites superiores e inferiores con if-else if-else en orden descendente.
- Para calcular el porcentaje entero redondeado, podés aplicar (int)(nota * 10.0f + 0.5f).
- En printf, utilizá %% para imprimir el carácter de porcentaje literal.
:::
