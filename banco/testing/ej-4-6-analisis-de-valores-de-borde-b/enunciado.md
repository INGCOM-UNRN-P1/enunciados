:::{exercise}
:label: ej-test-valores-borde
Tomando la función `clasificar_edad` del ejercicio anterior, identificá los
**valores de borde exactos** (límites) que deben ser testeados para asegurar que
no existan errores de tipo *off-by-one* (`<` en vez de `<=`).

-   **[*plus ultra*]:** Escribir una función de prueba unitaria para cada valor
    de borde detectado.
-   **[*plus ultra*]:** Explicar por qué los límites `-1, 0, 17, 18, 64, 65,
    130, 131` son los puntos más propensos a fallos en el software.

:::

:::{solution} ej-test-valores-borde
:class: dropdown
Valores de borde críticos:
- Límite inferior de validez: `-1` (inválido) y `0` (válido, menor).
- Frontera menor/adulto: `17` (menor) y `18` (adulto).
- Frontera adulto/mayor: `64` (adulto) y `65` (mayor).
- Límite superior de validez: `130` (mayor) y `131` (inválido).

```{code-block} c
:linenos:
void test_bordes_clasificar_edad(void)
{
    assert(clasificar_edad(-1) == -1);
    assert(clasificar_edad(0) == 1);
    assert(clasificar_edad(17) == 1);
    assert(clasificar_edad(18) == 2);
    assert(clasificar_edad(64) == 2);
    assert(clasificar_edad(65) == 3);
    assert(clasificar_edad(130) == 3);
    assert(clasificar_edad(131) == -1);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Análisis de Valores de Borde (Boundary Values)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_valores_de_borde_b(int val);

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
