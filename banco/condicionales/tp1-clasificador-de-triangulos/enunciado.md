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

Los lados deben ser positivos y finitos. Compará los lados por igualdad exacta
para clasificar; para Pitágoras aceptá una diferencia absoluta menor a `0.001`
entre el cuadrado del lado mayor y la suma de los cuadrados de los otros dos.
Los lados inválidos producen `TIPO_INVALIDO` y no son rectángulos.
