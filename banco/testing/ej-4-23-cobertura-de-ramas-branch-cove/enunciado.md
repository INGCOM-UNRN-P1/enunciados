:::{exercise}
:label: ej-test-cobertura-ramas-cuadernillo
Dada la siguiente función de aprobación:

```{code-block} c
:linenos:
int evaluar_alumno(int parcial1, int parcial2, int asistencia_pct)
{
    if (asistencia_pct < 75)
    {
        return 0; // Libre por asistencia
    }
    if (parcial1 >= 60 && parcial2 >= 60)
    {
        return 2; // Promocionado
    }
    if (parcial1 >= 40 || parcial2 >= 40)
    {
        return 1; // Regular
    }
    return 0; // Reprobado
}

```

¿Cuántas pruebas unitarias como mínimo se requieren para lograr el **100% de
cobertura de ramas (Branch Coverage)**? Escribí los casos de prueba con sus
valores de entrada y salida esperada.

-   **[*plus ultra*]:** Identificar todas las ramas de decisión booleanas (`&&`,
    `||`).
-   **[*plus ultra*]:** Escribir una suite con `assert()` que ejecute
    exactamente todos los caminos.

:::

:::{solution} ej-test-cobertura-ramas
:class: dropdown
Se requieren al menos 5 casos de prueba para cubrir todas las ramas:
1. `asistencia_pct < 75` (ej. 50, 80, 80) $\rightarrow$ `0`
2. `parcial1 >= 60 && parcial2 >= 60` (ej. 80, 70, 80) $\rightarrow$ `2`
3. `parcial1 >= 60` pero `parcial2 < 60` y `>= 40` (ej. 70, 50, 80)
   $\rightarrow$ `1`
4. `parcial1 < 60` pero `parcial2 >= 40` (ej. 30, 50, 80) $\rightarrow$ `1`
5. Ambos parciales `< 40` con asistencia (ej. 30, 20, 80) $\rightarrow$ `0`

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación evaluar_alumno
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int evaluar_alumno(int parcial1, int parcial2, int asistencia_pct);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
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
- Asegurate de diseñar casos de prueba que ejerciten tanto la rama true como la rama false de cada if.
- Incluí casos que cubran todas las alternativas de estructuras switch-case incluyendo el default.
- Verificá condiciones compuestas evaluando cortocircuitos lógicos con operadores && y ||.
:::
