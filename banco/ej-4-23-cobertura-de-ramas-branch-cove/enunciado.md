### Ejercicio 4.23 - Cobertura de Ramas (Branch Coverage) ⭐⭐☆☆☆

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
<!-- {code-block} c -->

¿Cuántas pruebas unitarias como mínimo se requieren para lograr el **100% de
cobertura de ramas (Branch Coverage)**? Escribí los casos de prueba con sus
valores de entrada y salida esperada.

-   **[*plus ultra*]:** Identificar todas las ramas de decisión booleanas (`&&`,
    `||`).
-   **[*plus ultra*]:** Escribir una suite con `assert()` que ejecute
    exactamente todos los caminos.

:::
<!-- {exercise} -->

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
<!-- {solution} ej-test-cobertura-ramas -->

---
