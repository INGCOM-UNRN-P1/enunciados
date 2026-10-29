:::{exercise}
:label: ej-test-acoplamiento-espurio
Explicá por qué compartir variables globales entre diferentes archivos `.c`
(usando `extern`) rompe el principio de modularidad y hace que un fallo en un
módulo rompa silenciosamente a otro.

-   **[*plus ultra*]:** Proponer una solución basada en interfaces limpias de
    funciones en archivos de cabecera `.h`.
-   **[*plus ultra*]:** Citar la [Regla
    0x2004h](../../reglas/2_funciones.md#0x2004h) y sus consecuencias de
    ingeniería.

:::

:::{solution} ej-test-acoplamiento-espurio
:class: dropdown
Cuando dos módulos acceden a una variable global compartida mediante `extern`:
1. No existe un contrato explícito sobre quién tiene derecho a modificarla ni
   cuándo.
2. Es imposible razonar sobre el estado de un módulo sin inspeccionar todo el
   código fuente del otro.
3. Las pruebas unitarias de un módulo requieren simular o sincronizar el estado
   global del otro, eliminando el aislamiento.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Acoplamiento espurio entre módulos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_to_espurio_entre_mod(int val);

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
- Identificá dependencias innecesarias o variables globales compartidas entre módulos independientes.
- Encapsulá los datos del módulo mediante funciones de acceso y tipos opacos.
- Reducí el conocimiento que un módulo tiene sobre la estructura interna de otro.
:::
