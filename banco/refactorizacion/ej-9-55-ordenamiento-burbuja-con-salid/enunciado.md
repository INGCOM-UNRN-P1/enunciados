:::{exercise}
:label: ej-ref-burbuja-temprana
Refactorizá la siguiente función de ordenamiento burbuja escrita en un solo lazo
críptico:

``` c
void bsort(int a[],int n){int s=1;while(s){s=0;for(int i=0;i<n-1;i++)if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;s=1;}}}
```

**Tu tarea:**
1. Descomponer el algoritmo en dos lazos estructurados `for` en estilo Allman.
2. Extraer la función auxiliar pura `void intercambiar_enteros(int *a, int *b)`.
3. Escribir tests unitarios con `assert()` verificando arreglos desordenados,
   ordenados e invertidos.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Ordenamiento Burbuja con Salida Temprana
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_to_burbuja_con_salid(int val);

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
