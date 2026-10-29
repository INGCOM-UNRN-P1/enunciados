:::{exercise}
:label: ej-test-defensiva-vs-usuario
Explicá con claridad la diferencia conceptual entre:
1. Validar datos ingresados por el usuario por teclado con `scanf` y
   condicionales `if`.
2. Validar precondiciones internas del programador con `assert()`.

-   **[*plus ultra*]:** Dar un ejemplo de cuándo usar `if (...) return
    CODIGO_ERROR;` y cuándo usar `assert(divisor != 0);`.
-   **[*plus ultra*]:** Explicar por qué un programa de producción nunca debe
    abortar con `assert` si el usuario escribe una letra en lugar de un número.

:::

:::{solution} ej-test-defensiva-vs-usuario
:class: dropdown
1. **Validación de Usuario (`if` / manejo de errores):** Es obligatoria para
   entradas externas incontrolables (teclado, archivos, red). El programa debe
   manejar el error con gracia, avisar al usuario y recuperarse.
2. **Aserciones (`assert`):** Son herramientas de depuración para detectar bugs
   de lógica del programador (violaciones de contrato que "nunca deberían
   ocurrir" si el código estuviera bien escrito).

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Aserciones defensivas vs Validación de Usuario
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__defensivas_vs_valid(int val);

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
