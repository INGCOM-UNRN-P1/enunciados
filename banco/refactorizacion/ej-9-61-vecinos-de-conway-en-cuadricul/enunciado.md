:::{exercise}
:label: ej-ref-conway-vecinos
Analizá y refactorizá la siguiente función que cuenta los vecinos vivos (valor
1) alrededor de una celda $(r, c)$ en una cuadrícula $5 \times 5$:

``` c
int nb(int g[25],int r,int c){int cnt=0;for(int dr=-1;dr<=1;dr++)for(int dc=-1;dc<=1;dc++){if(!dr&&!dc)continue;int nr=r+dr,nc=c+dc;if(nr>=0&&nr<5&&nc>=0&&nc<5)cnt+=g[nr*5+nc];}return cnt;}
```

**Tu tarea:**
1. Formatear la doble iteración en estilo Allman.
2. Definir constantes `#define GRILLA_DIMENSION 5`.
3. Extraer la función `bool esta_dentro_de_grilla(int fila, int columna)`.
4. Escribir tests con `assert()` para celdas esquinas, bordes y centrales.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Vecinos de Conway en Cuadrícula $5 \times 5$
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__conway_en_cuadricul(int val);

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
