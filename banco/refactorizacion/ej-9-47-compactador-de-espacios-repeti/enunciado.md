:::{exercise}
:label: ej-ref-compactar-espacios
Refactorizá la siguiente función que copia caracteres de `orig` a `dest`
colapsando múltiples espacios consecutivos en uno solo:

``` c
int comp(char o[],int n,char d[]){int j=0,e=0;for(int i=0;i<n;i++){if(o[i]==' '){if(!e){d[j++]=' ';e=1;}}else{d[j++]=o[i];e=0;}}return j;}
```

-   **[*plus ultra*]:** Retornar la nueva longitud escrita en `d`.
-   **[*plus ultra*]:** Escribir tests con `assert()` verificando secuencias con
    múltiples espacios.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Compactador de Espacios Repetidos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_r_de_espacios_repeti(int val);

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
