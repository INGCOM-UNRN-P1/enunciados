### Ejercicio 9.61 - Vecinos de Conway en Cuadrícula $5 \times 5$ ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-conway-vecinos
Analizá y refactorizá la siguiente función que cuenta los vecinos vivos (valor
1) alrededor de una celda $(r, c)$ en una cuadrícula $5 \times 5$:

``` c
int nb(int g[25],int r,int c){int cnt=0;for(int dr=-1;dr<=1;dr++)for(int dc=-1;dc<=1;dc++){if(!dr&&!dc)continue;int nr=r+dr,nc=c+dc;if(nr>=0&&nr<5&&nc>=0&&nc<5)cnt+=g[nr*5+nc];}return cnt;}
```
<!-- c -->

**Tu tarea:**
1. Formatear la doble iteración en estilo Allman.
2. Definir constantes `#define GRILLA_DIMENSION 5`.
3. Extraer la función `bool esta_dentro_de_grilla(int fila, int columna)`.
4. Escribir tests con `assert()` para celdas esquinas, bordes y centrales.

:::
<!-- {exercise} -->

---
