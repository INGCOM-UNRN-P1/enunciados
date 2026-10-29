**Dificultad:** ⭐⭐☆☆☆

Escribir un programa que lea dos valores enteros que definen un rango $[A, B]$ y muestre por pantalla todos los números pares comprendidos entre ambos valores (inclusive).

## Entrada
Dos números enteros $A$ y $B$.

## Salida
Todos los números pares dentro del intervalo $[A, B]$ separados por espacio o línea.

### Ejemplo
- **Entrada:**
  ```text
  1
  10
  ```
- **Salida:** `2 4 6 8 10`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Pares en Rango
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_pares_en_rango(int val);

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
- Si A > B, intercambiá los extremos para recorrer el intervalo en orden creciente.
- Imprimí los valores donde valor % 2 == 0.
:::
