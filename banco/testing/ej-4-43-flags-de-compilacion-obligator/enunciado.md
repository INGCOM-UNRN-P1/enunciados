:::{exercise}
:label: ej-test-flags-compilacion
Explicá qué detecta cada uno de los siguientes flags de `gcc` y por qué son
obligatorios en las buenas prácticas de ingeniería ([Regla
0x5002h](../../reglas/5_buenas_practicas.md#0x5002h)):
- `-Wall`
- `-Wextra`
- `-Werror`
- `-Wpedantic`

-   **[*plus ultra*]:** Configurar una línea de compilación modelo en un archivo
    Makefile.

:::

:::{solution} ej-test-flags-compilacion
:class: dropdown
- `-Wall`: Habilita todas las advertencias comunes sobre construcciones dudosas
  (variables no usadas, conversiones implícitas riesgosas).
- `-Wextra`: Habilita advertencias adicionales más rigurosas (comparaciones con
  signo/sin signo, parámetros no utilizados).
- `-Werror`: Trata todas las advertencias como errores de compilación,
  impidiendo generar el binario si existen problemas.
- `-Wpedantic`: Exige estricto apego al estándar ISO de C, rechazando
  extensiones propietarias del compilador.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Flags de Compilación Obligatorios
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ompilacion_obligator(int val);

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
