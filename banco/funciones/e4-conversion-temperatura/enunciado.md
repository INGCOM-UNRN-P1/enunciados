- **Módulo:** `ejercicios/ejercicio9/ejercicio9.h` /
  `ejercicios/ejercicio9/ejercicio9.c`
- **Operaciones a implementar:**
  1. `float celsius_a_fahrenheit(float grados_celsius);`: Convierte una
     temperatura en grados Celsius a su equivalente en grados Fahrenheit.
  2. `float fahrenheit_a_celsius(float grados_fahrenheit);`: Convierte una
     temperatura en grados Fahrenheit a su equivalente en grados Celsius.
  3. `float celsius_a_kelvin(float grados_celsius);`: Convierte una temperatura
     en grados Celsius a su equivalente en grados Kelvin. Si la temperatura está
     por debajo del cero absoluto (-273.15 grados Celsius), retorna `-1.0f`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Convierte grados Celsius a grados Fahrenheit (F = C * 9/5 + 32).
 * @param celsius Temperatura en Celsius.
 * @return Temperatura en Fahrenheit.
 */
float celsius_a_fahrenheit(float celsius);

/**
 * @brief Convierte grados Fahrenheit a grados Celsius (C = (F - 32) * 5/9).
 * @param fahrenheit Temperatura en Fahrenheit.
 * @return Temperatura en Celsius.
 */
float fahrenheit_a_celsius(float fahrenheit);

/**
 * @brief Convierte grados Celsius a Kelvin (K = C + 273.15).
 * @param celsius Temperatura en Celsius.
 * @return Temperatura en Kelvin, o -1.0f si está por debajo del cero absoluto (celsius < -273.15f).
 */
float celsius_a_kelvin(float celsius);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
