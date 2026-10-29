#### Descripción
Escribir la función complementaria que descifre un mensaje cifrado con el
Cifrado César, conociendo el desplazamiento. Es la operación inversa al
ejercicio anterior.



:::{tip} Lógica y Consideraciones

-   **Proceso:** Es idéntico al cifrado, pero en lugar de sumar el
    desplazamiento, se resta. Para manejar el wraparound negativo, la fórmula
    puede ser `'a' + (c - 'a' - desplazamiento + 26) % 26`.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
FUNCION descifrado_cesar(cadena, desplazamiento)
INICIO
    // La lógica es la misma que el cifrado, pero con -desplazamiento
    RETORNAR cifrado_cesar(cadena, 26 - desplazamiento)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Descifrado César
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_b26_descifrado_cesar(int val);

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
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
- **Proceso:** Es idéntico al cifrado, pero en lugar de sumar el desplazamiento, se resta. Para manejar el wraparound negativo, la fórmula puede ser `'a' + (c - 'a' - desplazamiento + 26) % 26`.
:::
