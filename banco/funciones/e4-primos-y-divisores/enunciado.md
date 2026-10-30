- **Módulo:** `ejercicios/ejercicio1/ejercicio1.h` /
  `ejercicios/ejercicio1/ejercicio1.c`
- **Operaciones a implementar:**
  1. `int es_primo(int numero);`: Determina si un número entero es primo.
     Retorna `1` si es primo, `0` en caso contrario (los números menores o
     iguales a 1 no son primos).
  2. `int proximo_primo(int numero_base);`: Retorna el menor número primo
     estrictamente mayor que `numero_base`.
  3. `int cantidad_divisores(int numero);`: Retorna la cantidad total de
     divisores positivos de `numero`. Si `numero` es menor o igual a 0, retorna
     `0`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Determina si un número entero positivo es primo.
 * @param numero Número entero a evaluar.
 * @return 1 si es primo, 0 si no lo es (números <= 1 no son primos).
 */
int es_primo(int numero);

/**
 * @brief Encuentra el menor número primo estrictamente mayor que el número dado.
 * @param numero Número entero base.
 * @return El siguiente número primo.
 */
int proximo_primo(int numero);

/**
 * @brief Cuenta la cantidad total de divisores positivos de un número.
 * @param numero Número entero positivo.
 * @return Cantidad de divisores positivos (o 0 si numero <= 0).
 */
int cantidad_divisores(int numero);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
