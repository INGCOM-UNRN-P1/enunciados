:::{exercise}
:label: ej-ref-componentes-conexas-1d
El siguiente código cuenta cuántas secuencias continuas de números positivos
existen en un arreglo:

``` c
int comp1d(int a[],int n){int c=0,in=0;for(int i=0;i<n;i++){if(a[i]>0&&!in){c++;in=1;}else if(a[i]<=0){in=0;}}return c;}
```

**Tu tarea:**
1. Refactorizar aplicando estilo Allman y nombres booleanos claros
   (`en_segmento_positivo`).
2. Validar casos de borde: todo positivo, todo negativo, arreglo vacío.
3. Escribir tests unitarios estructurados.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conteo de Componentes Conexas 1D
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__componentes_conexas(int val);

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
- Utilizá una bandera booleana en_segmento_positivo para rastrear cuándo se transita un componente.
- Incrementá el contador únicamente al entrar a un nuevo segmento positivo.
- Validá casos de borde: arreglo vacío (n=0), todos números positivos y todos números negativos.
:::
