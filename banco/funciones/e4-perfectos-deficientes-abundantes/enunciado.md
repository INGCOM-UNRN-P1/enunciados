- **Módulo:** `ejercicios/ejercicio8/ejercicio8.h` /
  `ejercicios/ejercicio8/ejercicio8.c`
- **Operaciones a implementar:**
  1. `int suma_divisores_propios(int numero);`: Suma todos los divisores
     positivos de `numero` estrictamente menores al propio número. Si `numero`
     es menor o igual a 0, retorna `-1`.
  2. `int clasificar_numero(int numero);`: Retorna `1` si la suma de divisores
     propios es igual a `numero` (perfecto), `0` si la suma es menor a `numero`
     (deficiente), o `2` si la suma es mayor a `numero` (abundante). Si `numero`
     es menor o igual a 0, retorna `-1`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Suma todos los divisores propios positivos de un número (menores al número).
 * @param numero Entero positivo.
 * @return Suma de divisores propios, o -1 si numero <= 0.
 */
int suma_divisores_propios(int numero);

/**
 * @brief Clasifica un número según la suma de sus divisores propios:
 *        1: Perfecto (suma == numero)
 *        0: Deficiente (suma < numero)
 *        2: Abundante (suma > numero)
 * @param numero Entero positivo.
 * @return Código de clasificación (1, 0, 2), o -1 si numero <= 0.
 */
int clasificar_numero(int numero);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
