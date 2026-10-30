Desarrollar el algoritmo de análisis de grafos y redes para: **Verificación de Grafo Bipartito y Dos-Coloración**.
El programa debe modelar las conexiones y adyacencias entre nodos (mediante matrices o listas de adyacencia), validar la conectividad de la topología y computar las métricas de red requeridas garantizando un recorrido eficiente y control adecuado de límites.

- `int ejecutar_grafo_red_10(int val)`: Procesa el flujo principal de Verificación de Grafo Bipartito y Dos-Coloración

- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 15 minutos (Nivel Bloom 2).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Verificación de Grafo Bipartito y Dos-Coloración
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_grafo_red_10(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Modelá las conexiones como matriz o lista de adyacencia.
- Controlá los límites de índices de vértices.
:::
