#### Descripción
Escribir una función que determine si una cadena es un anagrama de otra (es
decir, si ambas tienen los mismos caracteres con la misma frecuencia), ignorando
mayúsculas/minúsculas y espacios.



:::{tip} Lógica y Consideraciones

-   **Proceso (Arreglo de Frecuencias):**
    1.  Crear un arreglo de contadores de 26 posiciones (para el alfabeto),
        inicializado en cero.
    2.  Recorrer la primera cadena. Para cada carácter alfabético, incrementar
        el contador correspondiente (ej. para 'c', `contadores[2]++`).
    3.  Recorrer la segunda cadena. Para cada carácter alfabético, decrementar
        el contador correspondiente.
    4.  Finalmente, recorrer el arreglo de contadores. Si todos los contadores
        son cero, las cadenas son anagramas.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION son_anagramas(cadena1, cadena2)
VARIABLES:
    frecuencias (arreglo de 26 enteros)
INICIO
    INICIALIZAR frecuencias con ceros

    PARA cada caracter c en cadena1 HACER
        SI es_alfabetico(c) ENTONCES
            frecuencias[posicion_alfabeto(c)]++
        FIN SI
    FIN PARA

    PARA cada caracter c en cadena2 HACER
        SI es_alfabetico(c) ENTONCES
            frecuencias[posicion_alfabeto(c)]--
        FIN SI
    FIN PARA

    PARA i DESDE 0 HASTA 25 HACER
        SI frecuencias[i] != 0 RETORNAR FALSO
    FIN PARA

    RETORNAR VERDADERO
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Anagrama
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_11_6_b6_anagrama(int val);

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
- **Proceso (Arreglo de Frecuencias):**
- Crear un arreglo de contadores de 26 posiciones (para el alfabeto), inicializado en cero.
- Recorrer la primera cadena. Para cada carácter alfabético, incrementar el contador correspondiente (ej. para 'c', `contadores[2]++`).
- Recorrer la segunda cadena. Para cada carácter alfabético, decrementar el contador correspondiente.
- Finalmente, recorrer el arreglo de contadores. Si todos los contadores son cero, las cadenas son anagramas.
:::
