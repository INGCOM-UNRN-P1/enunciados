#### Descripción
Determinar si un número es un "número feliz". El proceso consiste en reemplazar
el número por la suma de los cuadrados de sus dígitos repetidamente. Si el
proceso llega a 1, el número es feliz. Si entra en un ciclo que no incluye el 1
(notablemente el ciclo `4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4`), no es
feliz.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_feliz(n)
INICIO
    MIENTRAS n != 1 Y n != 4 HACER
        suma_cuadrados = 0
        temp = n
        MIENTRAS temp > 0 HACER
            digito = temp MOD 10
            suma_cuadrados = suma_cuadrados + digito * digito
            temp = temp / 10
        FIN MIENTRAS
        n = suma_cuadrados
    FIN MIENTRAS

    RETORNAR (n == 1)
FIN FUNCION

```

:::

---

## Algoritmos Numéricos Avanzados

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Felices
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_16_numeros_felices(int val);

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
- **Entrada:** Un entero positivo `n`.
- **Proceso:** Usar un lazo `while`. En cada iteración, calcular la suma de los cuadrados de los dígitos del número actual. El lazo debe terminar si el número se convierte en 1 (feliz) o si se detecta un ciclo (no feliz). Para detectar ciclos, se puede guardar los números ya vistos en un arreglo o simplemente detectar si se llega al número 4. filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
- Detectar ciclos usando un límite de iteraciones para números que no son felices.
- Listar todos los números felices comprendidos entre 1 y 100.
:::
