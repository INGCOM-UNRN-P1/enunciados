Dibujá una pirámide centrada de asteriscos.

**Ejemplo (N=5):**


```
    *
   ***
  *****
 *******
*********
```

**Orientación:**
- Para cada fila i (de 0 a N-1):
  - Imprimí (N-i-1) espacios
  - Imprimí (2*i+1) asteriscos
  - Nueva línea

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Pirámide Centrada
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_36_piramide_centrada(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar que la altura de la pirámide sea un entero positivo.
- Permitir alternar entre pirámide sólida y con borde.
:::
