- **Módulo:** `ejercicios/ejercicio10/ejercicio10.h` /
  `ejercicios/ejercicio10/ejercicio10.c`
- **Operaciones a implementar:**
  1. `float perimetro_circulo(float radio);`: Retorna el perímetro de un círculo
     a partir de su radio. Si `radio` es negativo, retorna `-1.0f`.
  2. `float area_circulo(float radio);`: Retorna el área de un círculo a partir
     de su radio. Si `radio` es negativo, retorna `-1.0f`.
  3. `float area_triangulo(float base, float altura);`: Retorna el área de un
     triángulo a partir de su base y su altura. Si alguna de las dimensiones es
     menor o igual a 0, retorna `-1.0f`.
  4. `float calcular_hipotenusa(float primer_cateto, float segundo_cateto);`:
     Retorna la longitud de la hipotenusa de un triángulo rectángulo a partir de
     sus dos catetos. Si algún cateto es menor o igual a 0, retorna `-1.0f`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Calcula el perímetro de un círculo a partir de su radio.
 * @param radio Radio del círculo (>= 0).
 * @return Perímetro (2 * PI * radio), o -1.0f si radio < 0.
 */
float perimetro_circulo(float radio);

/**
 * @brief Calcula el área de un círculo a partir de su radio.
 * @param radio Radio del círculo (>= 0).
 * @return Área (PI * radio^2), o -1.0f si radio < 0.
 */
float area_circulo(float radio);

/**
 * @brief Calcula el área de un triángulo a partir de base y altura.
 * @param base Longitud de la base (> 0).
 * @param altura Longitud de la altura (> 0).
 * @return Área ((base * altura) / 2), o -1.0f si base <= 0 o altura <= 0.
 */
float area_triangulo(float base, float altura);

/**
 * @brief Calcula la hipotenusa de un triángulo rectángulo dados sus dos catetos.
 * @param cateto_a Longitud del primer cateto (> 0).
 * @param cateto_b Longitud del segundo cateto (> 0).
 * @return Longitud de la hipotenusa sqrt(a^2 + b^2), o -1.0f si algún cateto <= 0.
 */
float calcular_hipotenusa(float cateto_a, float cateto_b);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
