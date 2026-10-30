Calculadora estadística de procesamiento secuencial en flujo continuo (sin
almacenamiento en arreglos).

- `estadistica.h` / `estadistica.c`: Funciones `calcular_promedio`,
  `actualizar_minimo` y `actualizar_maximo`.
- `main.c`: Solicita la cantidad $N > 0$, itera leyendo cada número para
  actualizar acumuladores en $O(1)$ de memoria, y presenta suma, promedio,
  mínimo y máximo.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Calcula el promedio a partir de una suma acumulada y la cantidad
 *        de elementos.
 *
 * @param suma Suma total acumulada de los valores.
 * @param cantidad Cantidad de elementos sumados (debe ser mayor a cero).
 * @return float El promedio obtenido, o 0.0f si la cantidad es menor o igual
 *         a cero.
 */
float calcular_promedio(float suma, int cantidad);

/**
 * @brief Actualiza el valor mínimo comparándolo con un nuevo valor.
 *
 * @param actual_min Valor mínimo registrado hasta el momento.
 * @param nuevo_valor Nuevo valor a evaluar.
 * @return float El menor entre actual_min y nuevo_valor.
 */
float actualizar_minimo(float actual_min, float nuevo_valor);

/**
 * @brief Actualiza el valor máximo comparándolo con un nuevo valor.
 *
 * @param actual_max Valor máximo registrado hasta el momento.
 * @param nuevo_valor Nuevo valor a evaluar.
 * @return float El mayor entre actual_max y nuevo_valor.
 */
float actualizar_maximo(float actual_max, float nuevo_valor);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
