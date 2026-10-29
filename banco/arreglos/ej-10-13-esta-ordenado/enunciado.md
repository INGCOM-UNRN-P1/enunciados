Verificar si un arreglo está ordenado de forma ascendente.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION esta_ordenado(arreglo, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-2 HACER
        SI arreglo[i] > arreglo[i+1] ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de ¿Está ordenado?
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__10_13_esta_ordenado(int val);

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
- **Entrada:** Un arreglo y su tamaño.
- **Proceso:** Recorrer el arreglo desde el primer elemento hasta el penúltimo. En cada posición `i`, comparar el elemento `arreglo[i]` con el siguiente, `arreglo[i+1]`.
- **Condición de Salida:** Si en algún momento se encuentra que `arreglo[i] > arreglo[i+1]`, el arreglo no está ordenado y la función puede devolver `falso` inmediatamente.
- **Salida:** Si el lazo termina sin encontrar ninguna inversión de orden, significa que el arreglo está ordenado y la función devuelve `verdadero`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
