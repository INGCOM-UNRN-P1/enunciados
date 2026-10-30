- **Módulo:** `ejercicios/ejercicio2/ejercicio2.h` /
  `ejercicios/ejercicio2/ejercicio2.c`
- **Operaciones a implementar:**
  1. `int fibonacci(int posicion);`: Calcula el término correspondiente a la
     posición dada en la sucesión de Fibonacci (donde las posiciones 0 y 1 valen
     0 y 1 respectivamente, y cada término siguiente es la suma de los dos
     anteriores). Si `posicion` es negativa, retorna `-1`.
  2. `int suma_fibonacci(int hasta_posicion);`: Calcula la suma acumulada de los
     términos de Fibonacci desde la posición 0 hasta `hasta_posicion`. Si
     `hasta_posicion` es negativa, retorna `-1`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Calcula el n-ésimo término de la sucesión de Fibonacci (F0 = 0, F1 = 1).
 * @param n Posición (base 0).
 * @return El valor del término, o -1 si n < 0.
 */
int fibonacci(int n);

/**
 * @brief Calcula la suma acumulada de los primeros n términos de Fibonacci (de F0 hasta Fn).
 * @param n Cantidad de términos inclusive.
 * @return La suma acumulada, o -1 si n < 0.
 */
int suma_fibonacci(int n);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
