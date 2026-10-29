#### Descripción
Aproximar el valor de $\pi$ utilizando la serie de Leibniz. La función debe
recibir el número de términos a utilizar para la aproximación.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION aproximar_pi(n_terminos)
VARIABLES:
    suma (real)
INICIO
    suma = 0.0
    PARA k DESDE 0 HASTA n_terminos - 1 HACER
        termino = potencia(-1, k) / (2.0 * k + 1.0)
        suma = suma + termino
    FIN PARA
    RETORNAR 4.0 * suma
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Cálculo de Pi (Serie de Leibniz)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__pi_serie_de_leibniz(int val);

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
- **Fórmula:** $\pi = 4 \sum_{k=0}^{\infty} \frac{(-1)^k}{2k+1} = 4 (1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \dots)$
- **Proceso:**
- Inicializar una variable `suma` a 0.
- Iterar `k` desde 0 hasta el número de términos deseado.
- En cada iteración, calcular el término $\frac{(-1)^k}{2k+1}$ y añadirlo a `suma`.
- El resultado final es `4 * suma`. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Permitir al usuario ingresar la cantidad de términos o la precisión deseada.
- Comparar el valor aproximado con M_PI de math.h y mostrar el error relativo.
:::
