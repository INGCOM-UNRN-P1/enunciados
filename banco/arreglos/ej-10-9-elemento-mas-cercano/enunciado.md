Dado un arreglo y un valor de referencia, encontrar el elemento en el arreglo
que tiene la menor diferencia absoluta con dicho valor.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION encontrar_mas_cercano(arreglo, tamano, referencia)
VARIABLES:
    menor_diferencia, diferencia_actual (reales)
    elemento_cercano (tipo del arreglo)
INICIO
    menor_diferencia = VALOR_INFINITO
    PARA cada elemento x EN arreglo HACER
        diferencia_actual = VALOR_ABSOLUTO(x - referencia)
        SI diferencia_actual < menor_diferencia ENTONCES
            menor_diferencia = diferencia_actual
            elemento_cercano = x
        FIN SI
    FIN PARA
    RETORNAR elemento_cercano
FIN FUNCION

```

:::

## Manipulación de Arreglos

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Elemento más cercano
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_elemento_mas_cercano(int val);

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
- **Entrada:** Un arreglo, su tamaño y un valor de referencia.
- **Variables:** Se necesitan variables para guardar la `menor_diferencia` encontrada hasta el momento y el `elemento_mas_cercano`.
- **Proceso:**
- Inicializar `menor_diferencia` con un valor muy grande y `elemento_mas_cercano` con el primer elemento.
- Recorrer el arreglo. Para cada elemento, calcular la `diferencia_actual` (el valor absoluto de `elemento - referencia`).
- Si `diferencia_actual` es menor que `menor_diferencia`, actualizar `menor_diferencia` y `elemento_mas_cercano`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
