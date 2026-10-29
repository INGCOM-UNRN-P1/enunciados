Analizar estos nombres de funciones y proponer mejoras siguiendo las reglas de
estilo:



```{code-block} c
:linenos:
// Biblioteca de procesamiento de imágenes
void process(img *i);
int calc(img *i, int x, int y);
void update(img *i, void *d);
int check(img *i);
void fix(img *i);
```

**Tareas:**
1. Identificar qué está mal con cada nombre
2. Proponer nombres descriptivos con prefijo apropiado
3. Agregar documentación de contrato para cada función

:::{tip} Nombres Descriptivos

Como se menciona en [claridad y expresividad](#1-claridad-y-expresividad), los
nombres deben comunicar claramente la acción que realizan. Usar verbos
específicos en lugar de genéricos como "process" o "update".

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Crítica de Nombres
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_1_critica_de_nombres(int val);

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
- Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
- Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
:::
