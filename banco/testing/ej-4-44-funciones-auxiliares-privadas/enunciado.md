:::{exercise}
:label: ej-test-funciones-static
Explicá por qué las funciones auxiliares de un módulo `.c` que no forman parte
de la interfaz pública deben declararse obligatoriamente con el calificador
`static`.

-   **[*plus ultra*]:** Explicar el concepto de visibilidad de enlace (*internal
    linkage*).
-   **[*plus ultra*]:** Explicar cómo esto previene colisiones de nombres con
    funciones auxiliares de otros archivos `.c`.

:::

:::{solution} ej-test-funciones-static
:class: dropdown
El calificador `static` en una función a nivel de archivo restringe su
visibilidad exclusivamente a la unidad de traducción actual (*internal
linkage*). Esto encapsula los detalles de implementación internos y previene
errores de símbolos duplicados en tiempo de enlace (*linker collision*).

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Funciones Auxiliares Privadas `static`
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__auxiliares_privadas(int val);

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
