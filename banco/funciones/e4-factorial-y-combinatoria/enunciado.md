- **Módulo:** `ejercicios/ejercicio3/ejercicio3.h` /
  `ejercicios/ejercicio3/ejercicio3.c`
- **Operaciones a implementar:**
  1. `long long factorial(int numero);`: Calcula el factorial de un número
     entero no negativo. Para 0, el factorial es 1. Si `numero` es negativo,
     retorna `-1`.
  2. `long long combinatorio(int cantidad_elementos, int elementos_por_grupo);`:
     Calcula la cantidad de combinaciones posibles de `cantidad_elementos`
     agrupados de a `elementos_por_grupo`. Si `elementos_por_grupo` es negativo,
     mayor a `cantidad_elementos`, o si `cantidad_elementos` es negativo,
     retorna `-1`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Calcula el factorial de un número entero no negativo (n!).
 * @param n Número entero.
 * @return n! como long long, o -1 si n < 0.
 */
long long factorial(int n);

/**
 * @brief Calcula el número combinatorio C(n, k) = n! / (k! * (n - k)!).
 * @param n Total de elementos.
 * @param k Elementos a seleccionar.
 * @return Valor de C(n, k), o -1 si los valores no son válidos (k < 0 o k > n).
 */
long long combinatorio(int n, int k);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
