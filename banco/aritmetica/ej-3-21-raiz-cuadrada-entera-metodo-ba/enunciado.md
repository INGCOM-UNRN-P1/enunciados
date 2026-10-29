#### Descripción
Implementar un algoritmo para calcular la parte entera de la raíz cuadrada de un
número `n` utilizando el método babilónico (o de Herón), que es un método
iterativo eficiente.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION raiz_cuadrada_entera(n)
VARIABLES:
    x (real)
INICIO
    SI n < 0 RETORNAR -1 // Error
    SI n == 0 RETORNAR 0

    x = n
    // Iterar un número fijo de veces para aproximar
    PARA i DESDE 1 HASTA 10 HACER
        x = (x + n / x) / 2
    FIN PARA

    RETORNAR PARTE_ENTERA(x)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Raíz Cuadrada Entera (Método Babilónico)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ada_entera_metodo_ba(int val);

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
- **Entrada:** Un número no negativo `n`.
- **Proceso:** Es un algoritmo de aproximaciones sucesivas.
- Se elige una estimación inicial `x` (por ejemplo, `x = n`).
- Se repite un número fijo de veces o hasta que la estimación converja: `x = (x + n / x) / 2`.
- **Salida:** El resultado es la parte entera de la estimación final `x`. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Mostrar la cantidad de iteraciones requeridas hasta alcanzar la convergencia.
- Validar que el número sea no negativo.
:::
