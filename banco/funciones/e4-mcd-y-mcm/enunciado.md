- **Módulo:** `ejercicios/ejercicio4/ejercicio4.h` /
  `ejercicios/ejercicio4/ejercicio4.c`
- **Operaciones a implementar:**
  1. `int maximo_comun_divisor(int primer_numero, int segundo_numero);`: Calcula
     el máximo común divisor entre dos enteros mediante el algoritmo de
     Euclides. Si ambos valores son 0, retorna `-1`.
  2. `int minimo_comun_multiplo(int primer_numero, int segundo_numero);`:
     Calcula el mínimo común múltiplo entre dos enteros positivos a partir de su
     producto y su máximo común divisor. Si alguno es menor o igual a 0, retorna
     `-1`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Calcula el Máximo Común Divisor entre dos números enteros mediante el algoritmo de Euclides.
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * @return El MCD positivo entre a y b, o -1 si ambos son 0.
 */
int maximo_comun_divisor(int a, int b);

/**
 * @brief Calcula el Mínimo Común Múltiplo entre dos números enteros.
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * @return El MCM positivo entre a y b, o -1 si alguno es <= 0.
 */
int minimo_comun_multiplo(int a, int b);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
