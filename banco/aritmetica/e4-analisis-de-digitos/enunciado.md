- **Módulo:** `ejercicios/ejercicio5/ejercicio5.h` /
  `ejercicios/ejercicio5/ejercicio5.c`
- **Operaciones a implementar:**
  1. `int contar_digitos(int numero);`: Retorna la cantidad de dígitos decimales
     de `numero` (el número 0 tiene 1 dígito).
  2. `int sumar_digitos(int numero);`: Retorna la suma de los valores absolutos
     de los dígitos de `numero`.
  3. `int invertir_numero(int numero);`: Invierte el orden de los dígitos
     conservando el signo (ejemplo: 1230 pasa a 321, -45 pasa a -54).
  4. `int es_capicua(int numero);`: Retorna `1` si el número se lee igual de
     izquierda a derecha que de derecha a izquierda, `0` en caso contrario.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Cuenta la cantidad de dígitos decimales de un número entero.
 * @param numero Número entero.
 * @return Cantidad de dígitos (el 0 tiene 1 dígito).
 */
int contar_digitos(int numero);

/**
 * @brief Suma los valores absolutos de los dígitos de un número entero.
 * @param numero Número entero.
 * @return Suma de sus dígitos.
 */
int sumar_digitos(int numero);

/**
 * @brief Invierte el orden de los dígitos conservando el signo.
 * @param numero Número entero.
 * @return Número con dígitos invertidos (ej: 1230 -> 321, -45 -> -54).
 */
int invertir_numero(int numero);

/**
 * @brief Determina si un número entero es capicúa (se lee igual en ambos sentidos).
 * @param numero Número entero.
 * @return 1 si es capicúa, 0 en caso contrario.
 */
int es_capicua(int numero);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
