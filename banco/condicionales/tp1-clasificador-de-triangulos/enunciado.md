Validador y clasificador geométrico de triángulos según sus lados.

- `triangulo.h` / `triangulo.c`: Funciones a implementar:
  - `es_triangulo_valido(float a, float b, float c)`: retorna `true` si los tres
    lados satisfacen la desigualdad triangular (suma de dos lados > tercer lado).
  - `clasificar_triangulo(float a, float b, float c)`: retorna un `int`/enum
    indicando equilátero (todos iguales), isósceles (dos iguales) o escaleno
    (todos diferentes).
  - `es_triangulo_rectangulo(float a, float b, float c)`: retorna `true` si
    satisface el teorema de Pitágoras (con tolerancia de punto flotante).
- `main.c`: Solicita las longitudes de los tres lados con `leer_flotante`,
  informa validez según la desigualdad triangular, tipo de triángulo por lados
  (equilátero, isósceles o escaleno) y si satisface el teorema de Pitágoras.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Determina si tres longitudes pueden formar un triángulo válido.
 *
 * Aplica la desigualdad triangular estricta: cada lado debe ser menor
 * que la suma de los otros dos, y todos los lados deben ser mayores a cero.
 *
 * @param lado_a Longitud del primer lado.
 * @param lado_b Longitud del segundo lado.
 * @param lado_c Longitud del tercer lado.
 * @return bool true si forman un triángulo válido, false en caso contrario.
 */
bool es_triangulo_valido(float lado_a, float lado_b, float lado_c);

/**
 * @brief Clasifica un triángulo según las longitudes de sus lados.
 *
 * Determina si el triángulo es equilátero, isósceles o escaleno.
 * Si los lados no forman un triángulo válido, retorna TIPO_INVALIDO.
 *
 * @param lado_a Longitud del primer lado.
 * @param lado_b Longitud del segundo lado.
 * @param lado_c Longitud del tercer lado.
 * @return int Constante de tipo de triángulo o TIPO_INVALIDO si no es válido.
 */
int clasificar_triangulo(float lado_a, float lado_b, float lado_c);

/**
 * @brief Determina si un triángulo es rectángulo mediante Pitágoras.
 *
 * Evalúa si el cuadrado de alguno de los lados es igual a la suma de los
 * cuadrados de los otros dos, considerando una tolerancia para flotantes.
 * Si el triángulo no es válido, retorna false.
 *
 * @param lado_a Longitud del primer lado.
 * @param lado_b Longitud del segundo lado.
 * @param lado_c Longitud del tercer lado.
 * @return bool true si es rectángulo, false en caso contrario o inválido.
 */
bool es_triangulo_rectangulo(float lado_a, float lado_b, float lado_c);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
