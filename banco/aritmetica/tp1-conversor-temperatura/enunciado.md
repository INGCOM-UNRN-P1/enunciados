Conversor interactivo de escalas termométricas.

- `conversor.h` / `conversor.c`: Funciones puras `celsius_a_fahrenheit(float)` y
  `fahrenheit_a_celsius(float)`.
- `main.c`: Menú interactivo con validación de opciones y repetición con
  `leer_logico`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Convierte una temperatura en grados Celsius a grados Fahrenheit.
 *
 * @param celsius Temperatura en grados Celsius.
 * @return float Temperatura equivalente en grados Fahrenheit.
 */
float celsius_a_fahrenheit(float celsius);

/**
 * @brief Convierte una temperatura en grados Fahrenheit a grados Celsius.
 *
 * @param fahrenheit Temperatura en grados Fahrenheit.
 * @return float Temperatura equivalente en grados Celsius.
 */
float fahrenheit_a_celsius(float fahrenheit);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
