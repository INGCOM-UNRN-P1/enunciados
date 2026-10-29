Encontrar un "punto de equilibrio" en un arreglo. Es un índice tal que la suma
de los elementos a su izquierda es igual a la suma de los elementos a su
derecha. Si no existe, devolver -1.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION encontrar_equilibrio(arreglo, tamano)
VARIABLES:
    suma_total, suma_izquierda
INICIO
    suma_total = sumar_arreglo(arreglo, tamano)
    suma_izquierda = 0

    PARA i DESDE 0 HASTA tamano-1 HACER
        suma_total = suma_total - arreglo[i]
        SI suma_izquierda == suma_total ENTONCES
            RETORNAR i
        FIN SI
        suma_izquierda = suma_izquierda + arreglo[i]
    FIN PARA

    RETORNAR -1
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Punto de equilibrio
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__punto_de_equilibrio(int val);

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
- **Proceso (dos pasadas):**
- Calcular la suma total de todos los elementos del arreglo.
- Inicializar `suma_izquierda = 0`.
- Recorrer el arreglo. En cada posición `i`: a. `suma_derecha = suma_total - suma_izquierda - arreglo[i]`. b. Si `suma_izquierda == suma_derecha`, se encontró el punto. c. Actualizar `suma_izquierda = suma_izquierda + arreglo[i]`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
