:::{exercise}
:label: ej-ref-insercion-compacto
Refactorizá la siguiente implementación de Insertion Sort:

``` c
void isort(int a[],int n){for(int i=1;i<n;i++){int k=a[i],j=i-1;while(j>=0&&a[j]>k){a[j+1]=a[j];j--;}a[j+1]=k;}}
```

**Tu tarea:**
1. Formatear en estilo Allman con llaves explícitas en todos los bloques.
2. Renombrar variables (`elemento_clave, indice_anterior`).
3. Escribir tests unitarios que validen el orden no decreciente del arreglo tras
   la ejecución.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Ordenamiento por Inserción Compacto
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_to_por_insercion_com(int val);

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
- Estructurá los bloques de control con llaves explícitas y sangría consistente estilo Allman.
- Renombrá las variables crípticas por nombres descriptivos como elemento_clave e indice_anterior.
- Asegurate de que el lazo interno respete el límite inferior indice_anterior >= 0.
:::
