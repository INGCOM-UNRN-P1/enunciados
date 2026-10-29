#### Descripción
Extender el Algoritmo de Euclides para encontrar no solo el MCD de dos enteros
`a` y `b`, sino también dos enteros `x` e `y` que satisfacen la identidad de
Bézout: $ax + by = mcd(a, b)$.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION mcd_extendido(a, b, REF x, REF y)
INICIO
    SI a == 0 ENTONCES
        x = 0
        y = 1
        RETORNAR b
    FIN SI

    x1, y1 (enteros)
    mcd = mcd_extendido(b MOD a, a, REF x1, REF y1)

    x = y1 - (b / a) * x1
    y = x1

    RETORNAR mcd
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Identidad de Bézout
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__identidad_de_bezout(int val);

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
- **Algoritmo Extendido de Euclides:** Es una modificación del algoritmo de Euclides que mantiene un registro de los coeficientes `x` e `y` en cada paso. Es inherentemente recursivo.
- **Proceso:** La implementación recursiva es más intuitiva. La llamada recursiva devuelve el MCD y los coeficientes para los números más pequeños, y la llamada actual los ajusta para los números originales. desbordamientos de búfer validando la capacidad máxima. líneas de manera robusta.
- Validar que los coeficientes satisfagan la igualdad a*x + b*y == mcd(a, b).
- Modularizar la versión extendida del algoritmo de Euclides.
:::
