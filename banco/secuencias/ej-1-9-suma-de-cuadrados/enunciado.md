Calcular la suma de los cuadrados de todos los números enteros en un rango
cerrado `[n, m]`. La operación es $\sum_{i=n}^{m} i^2$.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO suma_cuadrados_rango
ENTRADA: n, m (enteros)
VARIABLES:
    suma_cuadrados (entero)

INICIO
    suma_cuadrados = 0
    PARA i DESDE n HASTA m HACER
        suma_cuadrados = suma_cuadrados + (i * i)
    FIN PARA
    ESCRIBIR "La suma de cuadrados es: ", suma_cuadrados
FIN

```

:::

---

## Estructuras Condicionales

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma de Cuadrados
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__9_suma_de_cuadrados(int val);

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
- **Variables:** Se necesita un `acumulador` inicializado en 0.
- **Entrada:** Leer los enteros `n` y `m`.
- **Proceso:** Usar un lazo `for` que itere de `n` a `m`. En cada iteración,
- **Salida:** Al final, imprimir el valor del `acumulador`.
- Usar tipos enteros amplios como long long para soportar sumas de cuadrados elevadas.
- Comparar el resultado del lazo con la fórmula matemática n*(n+1)*(2n+1)/6.
:::
