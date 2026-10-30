Escribir una función recursiva que imprima la dirección de una variable local en
cada llamada. Observar si el stack crece hacia direcciones más altas o más
bajas.



```{code-block} c
:linenos:
void explorar_stack(int nivel)
{
    int variable_local;
    printf("Nivel %d: direccion = %p\n", nivel, (void *)&variable_local);
    if (nivel < 5)
    {
        explorar_stack(nivel + 1);
    }
}
```

### 📋 Contrato de las Funciones

```c
/*
 * Operación explorar_stack
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void explorar_stack(int nivel);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 1
```text
Entrada: 1
Salida / Retorno: 2
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Gestión de memoria:** Toda memoria solicitada dinámicamente debe ser validada y liberada de forma determinista sin generar fugas.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante AddressSanitizer o Valgrind.

:::{hint} Consideraciones Didácticas
- Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
- Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
:::
