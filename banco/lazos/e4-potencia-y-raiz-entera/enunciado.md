- **Módulo:** `ejercicios/ejercicio6/ejercicio6.h` /
  `ejercicios/ejercicio6/ejercicio6.c`
- **Operaciones a implementar:**
  1. `long long potencia(int base, int exponente);`: Calcula la potencia de la
     base elevada al exponente de forma iterativa para exponentes no negativos.
     Si `exponente` es negativo, retorna `-1`.
  2. `int raiz_cuadrada_entera(int numero);`: Calcula la parte entera de la raíz
     cuadrada sin usar librerías externas. Si `numero` es negativo, retorna
     `-1`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Calcula la potencia entera de una base elevada a un exponente no negativo.
 * @param base Base entera.
 * @param exponente Exponente entero (>= 0).
 * @return base^exponente como long long, o -1 si exponente < 0.
 */
long long potencia(int base, int exponente);

/**
 * @brief Calcula la parte entera de la raíz cuadrada (piso de sqrt(n)) sin usar math.h.
 * @param numero Entero no negativo.
 * @return floor(sqrt(numero)), o -1 si numero < 0.
 */
int raiz_cuadrada_entera(int numero);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
