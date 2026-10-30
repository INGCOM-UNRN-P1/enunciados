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
/*
 * Determina si tres longitudes pueden formar un triángulo válido.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_triangulo_valido(float lado_a, float lado_b, float lado_c);

/*
 * Clasifica un triángulo según las longitudes de sus lados.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int clasificar_triangulo(float lado_a, float lado_b, float lado_c);

/*
 * Determina si un triángulo es rectángulo mediante Pitágoras.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_triangulo_rectangulo(float lado_a, float lado_b, float lado_c);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Desigualdad triangular: cada lado debe ser menor a la suma de los otros dos (a < b + c && b < a + c && c < a + b) y todos mayores a cero.
- Clasificación: Equilátero (tres lados iguales), Isósceles (dos lados iguales) o Escaleno (tres lados distintos).
- Rectángulo: verifica Pitágoras con tolerancia epsilon (fabsf(h*h - (c1*c1 + c2*c2)) < 0.001f) identificando primero cuál es el lado mayor.
:::
