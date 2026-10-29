### Ejercicio 7.20 - Librería de Generación Numérica Pseudoaleatoria ⭐⭐⭐☆☆

Creá `azar.h` y `azar.c`:
- `void azar_inicializar(unsigned int semilla)`
- `int azar_entero_en_rango(int min, int max)`
- `double azar_double_0_1(void)`
- `bool azar_probabilidad(double p)` (retorna `true` con probabilidad `p` entre 0.0 y 1.0)
- `void azar_desordenar_arreglo(int *v, size_t n)`

:::{hint} Lógica y Consideraciones
- Encapsulá `rand()` y `srand()` de `<stdlib.h>` asegurando una distribución uniforme mediante operaciones adecuadas.
:::
<!-- {hint} Lógica y Consideraciones -->

---

## 5. Librerías de Simulación y Dominios Específicos
