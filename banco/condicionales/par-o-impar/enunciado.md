**Identificador:** `ejercicio3` | **Módulo:** Práctica 1

---

Este es un ejercicio fundamental de lógica condicional. El programa debe solicitar un número entero al usuario y determinar si es par (divisible por 2) o impar.

---

- **Entrada (`stdin`):** Un número entero $n$.
- **Salida (`stdout`):** `Par` si el número es divisible por 2, o `Impar` si no lo es, seguido de un salto de línea.

---

```text
Entrada:
4

Salida:
Par
```

```text
Entrada:
7

Salida:
Impar
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Par o Impar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_par_o_impar(int val);

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
- Un número entero es par si el resto de dividirlo por 2 es 0 (numero % 2 == 0).
- El operador módulo % calcula el resto de la división entera.
:::
