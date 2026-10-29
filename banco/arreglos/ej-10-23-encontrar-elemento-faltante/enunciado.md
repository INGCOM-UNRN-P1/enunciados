Dado un arreglo que contiene `n-1` números distintos en el rango de 1 a `n`,
encontrar el único número que falta.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION encontrar_faltante(arreglo, tamano_actual)
VARIABLES:
    n, suma_esperada, suma_real (enteros)
INICIO
    n = tamano_actual + 1
    suma_esperada = n * (n + 1) / 2
    suma_real = sumar_arreglo(arreglo, tamano_actual)
    RETORNAR suma_esperada - suma_real
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Encontrar elemento faltante
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ar_elemento_faltante(int val);

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
- **Proceso (Suma):**
- Calcular la suma esperada de todos los números de 1 a `n` usando la fórmula de la progresión aritmética: `suma_esperada = n * (n + 1) / 2`.
- Calcular la suma real de los elementos en el arreglo dado.
- El número faltante es la diferencia: `suma_esperada - suma_real`.
- **Proceso (XOR):** El XOR de todos los números del rango con todos los números del arreglo dará como resultado el número faltante.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
