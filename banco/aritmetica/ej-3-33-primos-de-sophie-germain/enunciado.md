#### Descripción
Un número primo `p` es un primo de Sophie Germain si `2p + 1` también es un
número primo. El programa debe encontrar todos los primos de Sophie Germain
hasta un límite $N$.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO primos_sophie_germain(N)
INICIO
    PARA p DESDE 2 HASTA N HACER
        SI es_primo(p) Y es_primo(2*p + 1) ENTONCES
            ESCRIBIR p
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Primos de Sophie Germain
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_os_de_sophie_germain(int val);

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
- **Entrada:** Un límite superior $N$.
- **Proceso:**
- Iterar con un número `p` desde 2 hasta $N$.
- En cada iteración, verificar si `p` es primo.
- Si `p` es primo, calcular `q = 2*p + 1` y verificar si `q` también es primo.
- Si ambos son primos, `p` es un primo de Sophie Germain. valores fuera de rango o tipos inválidos. un lazo hasta que el usuario elija finalizar.
- Validar que tanto p como 2p + 1 sean números primos.
- Listar todos los primos de Sophie Germain menores a un límite dado.
:::
