#### Descripción
Verificar si dos números enteros positivos, `a` y `b`, son "números amigos". Dos
números son amigos si la suma de los divisores propios de `a` es igual a `b`, y
viceversa.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION suma_divisores_propios(n)
    // ... implementación como en el ejercicio de Números Perfectos ...
FIN FUNCION

FUNCION son_amigos(a, b)
INICIO
    // Opcional: excluir números perfectos
    SI a == b ENTONCES
        RETORNAR FALSO
    FIN SI

    suma_a = suma_divisores_propios(a)
    suma_b = suma_divisores_propios(b)

    SI suma_a == b Y suma_b == a ENTONCES
        RETORNAR VERDADERO
    SINO
        RETORNAR FALSO
    FIN SI
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Amigos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__3_12_numeros_amigos(int val);

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
- **Entrada:** Dos enteros positivos, `a` y `b`.
- **Reutilización de Código:** Este problema se simplifica si ya se tiene una función que calcula la suma de los divisores propios de un número (como la usada en el ejercicio de "Números Perfectos").
- **Proceso:**
- Calcular la suma de los divisores propios de `a`. Llamémosla `suma_div_a`.
- Calcular la suma de los divisores propios de `b`. Llamémosla `suma_div_b`.
- Verificar si se cumplen las dos condiciones: `suma_div_a == b` Y `suma_div_b == a`.
- **Caso Especial:** Asegurarse de que `a` y `b` no sean el mismo número (un número perfecto es amigo de sí mismo, lo que a veces se excluye de la definición de números amigos). error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que n sea positivo y mostrar los divisores de ambos números para verificar la suma.
- Encontrar todos los pares de números amigos menores a un límite dado.
:::
