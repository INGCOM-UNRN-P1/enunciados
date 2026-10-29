#### Descripción
Dada una URL en formato de cadena, escribir una función que la analice y
extraiga sus componentes principales: protocolo, host y ruta.



:::{tip} Lógica y Consideraciones

-   **Proceso:** Usar funciones de búsqueda de caracteres (`:`, `/`) para
    encontrar los delimitadores y luego extraer las subcadenas correspondientes.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO analizar_url(url, REF protocolo, REF host, REF ruta)
VARIABLES:
    pos_protocolo, pos_host_inicio, pos_ruta_inicio (enteros)
INICIO
    pos_protocolo = encontrar_caracter(url, ':')
    protocolo = extraer_subcadena(url, 0, pos_protocolo)

    // ... lógica similar para host y ruta ...
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Análisis de URL simple
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_alisis_de_url_simple(int val);

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
- **Proceso:** Usar funciones de búsqueda de caracteres (`:`, `/`) para encontrar los delimitadores y luego extraer las subcadenas correspondientes.
:::
