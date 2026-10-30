- **Módulo:** `ejercicios/ejercicio7/ejercicio7.h` /
  `ejercicios/ejercicio7/ejercicio7.c`
- **Operaciones a implementar:**
  1. `long long decimal_a_binario(int numero_decimal);`: Convierte un entero
     decimal no negativo a su representación binaria expresada como número
     entero (ejemplo: 13 pasa a 1101). Si `numero_decimal` es negativo, retorna
     `-1`.
  2. `int binario_a_decimal(long long numero_binario);`: Convierte un número
     compuesto solo por dígitos 0 y 1 a su equivalente en base decimal (ejemplo:
     1101 pasa a 13). Si contiene dígitos inválidos o es negativo, retorna `-1`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Convierte un número decimal no negativo a su representación en binario como valor entero.
 * @param numero Entero no negativo (ej: 13).
 * @return Representación en binario (ej: 1101), o -1 si numero < 0.
 */
long long decimal_a_binario(int numero);

/**
 * @brief Convierte un valor entero que representa dígitos binarios (0 y 1) a su valor decimal.
 * @param binario Número compuesto de dígitos 0 y 1 (ej: 1101).
 * @return Equivalente decimal (ej: 13), o -1 si contiene dígitos inválidos o es negativo.
 */
int binario_a_decimal(long long binario);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
