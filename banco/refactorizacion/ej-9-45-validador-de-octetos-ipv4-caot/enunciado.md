:::{exercise}
:label: ej-ref-ipv4-caotico
Refactorizá la siguiente función que valida si 4 enteros representan una
dirección IPv4 válida ($0 \le x \le 255$):

``` c
int v4(int a,int b,int c,int d){if(a<0||a>255)return 0;if(b<0||b>255)return 0;if(c<0||c>255)return 0;if(d<0||d>255)return 0;return 1;}
```

-   **[*plus ultra*]:** Extraer la función pura `bool es_octeto_valido(int
    octeto)` (principio DRY).
-   **[*plus ultra*]:** Retornar un `bool` e incluir tests unitarios.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Validador de Octetos IPv4 Caótico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_octetos_ipv4_caot(int val);

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
