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
/*
 * Calcula el perímetro de un círculo a partir de su radio.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float perimetro_circulo(float radio);

/*
 * Calcula el área de un círculo a partir de su radio.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float area_circulo(float radio);

/*
 * Calcula el área de un triángulo a partir de base y altura.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float area_triangulo(float base, float altura);

/*
 * Calcula la hipotenusa de un triángulo rectángulo dados sus dos catetos.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float calcular_hipotenusa(float cateto_a, float cateto_b);

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
