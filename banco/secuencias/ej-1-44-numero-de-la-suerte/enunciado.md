Un número de la suerte es un entero con una cantidad par de dígitos, donde la
suma de los dígitos de la primera mitad es igual a la suma de los dígitos de la
segunda mitad. El programa debe verificar si un número dado es de la suerte.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO numero_de_la_suerte
ENTRADA: numero (entero)
VARIABLES:
    total_digitos, mitad_digitos, i (enteros)
    primera_mitad, segunda_mitad (enteros)
    suma1, suma2 (enteros)

INICIO
    LEER numero
    total_digitos = contar_digitos(numero)

    SI total_digitos MOD 2 != 0 ENTONCES
        ESCRIBIR "No es un número de la suerte (dígitos impares)."
        TERMINAR
    FIN SI

    mitad_digitos = total_digitos / 2
    divisor = potencia(10, mitad_digitos)

    primera_mitad = numero / divisor
    segunda_mitad = numero MOD divisor

    suma1 = sumar_digitos(primera_mitad)
    suma2 = sumar_digitos(segunda_mitad)

    SI suma1 == suma2 ENTONCES
        ESCRIBIR "Es un número de la suerte."
    SINO
        ESCRIBIR "No es un número de la suerte."
    FIN SI
FIN

```

:::

Escribí un programa que solicite tu nombre y te salude personalmente.

**Ejemplo de ejecución:**


```
Ingresá tu nombre: Juan
¡Hola, Juan! Bienvenido a la programación en C.
```

**Orientación:**
- Usá `printf()` para mostrar mensajes
- Usá `scanf()` para leer el nombre (máximo 50 caracteres)
- Recordá incluir `<stdio.h>`

---

Escribí un programa que lea dos números enteros y muestre su suma, resta,
producto y división.

**Ejemplo de ejecución:**


```
Primer número: 10
Segundo número: 3
Suma: 13
Resta: 7
Producto: 30
División: 3.33
```

**Orientación:**
- Declará variables para los dos números
- Para la división con decimales, convertí al menos uno de los operandos a
  `double`
- Usá `%.2f` para mostrar dos decimales

---

Creá un programa que convierta temperatura de Celsius a Fahrenheit y Kelvin.

**Fórmulas:**
- Fahrenheit = Celsius × 9/5 + 32
- Kelvin = Celsius + 273.15

**Orientación:**
- Usá `double` para almacenar temperaturas
- Aplicá las fórmulas de conversión
- Mostrá resultados con dos decimales



---

Escribí un programa que calcule el área y perímetro de un rectángulo dados su
ancho y alto.

**Orientación:**
- Área = ancho × alto
- Perímetro = 2 × (ancho + alto)
- Usá `double` para las medidas
- Verificá que ancho y alto sean positivos



---

Calculá el promedio de tres números decimales ingresados por el usuario.

**Orientación:**
- Leé tres números con `scanf("%lf", ...)`
- Promedio = (a + b + c) / 3.0
- Mostrá el resultado con dos decimales



---

Leé dos números enteros y mostralos intercambiados (sin usar una tercera
variable).

**Ejemplo:**


```
Ingresá a: 5
Ingresá b: 10
Después del intercambio:
a = 10
b = 5
```

**Orientación:**
- Usá operaciones aritméticas para intercambiar:
  - `a = a + b;`
  - `b = a - b;`
  - `a = a - b;`
- Verificá el resultado imprimiendo antes y después del intercambio

---

Convertí una distancia en metros a kilómetros, centímetros y milímetros.

**Orientación:**
- 1 metro = 0.001 km = 100 cm = 1000 mm
- Usá constantes para los factores de conversión
- Mostrá todas las conversiones



---

Calculá el Índice de Masa Corporal (IMC) dados peso (kg) y altura (m).

**Fórmula:** IMC = peso / (altura × altura)

**Orientación:**
- Verificá que altura sea mayor que 0
- Mostrá el IMC con dos decimales
- Opcionalmente, mostrá la categoría (bajo peso, normal, sobrepeso)



---

Dado un monto en pesos, calculá cuántos billetes de cada denominación (1000,
500, 200, 100, 50, 20, 10) se necesitan.

**Ejemplo:**


```
Monto: 1780
1 billete(s) de 1000
1 billete(s) de 500
1 billete(s) de 200
0 billete(s) de 100
1 billete(s) de 50
1 billete(s) de 20
1 billete(s) de 10
```

**Orientación:**
- Usá división entera y módulo
- Empezá por el billete más grande
- Restá el valor usado del monto

---

Convertí una cantidad de segundos a formato HH:MM:SS.

**Ejemplo:**


```
Segundos: 3665
Resultado: 1:01:05
```

**Orientación:**
- Horas = segundos / 3600
- Minutos = (segundos % 3600) / 60
- Segundos restantes = segundos % 60
- Mostrá con formato `printf("%d:%02d:%02d", h, m, s)`

---

Leé un número de tres dígitos y mostrá cada dígito por separado.

**Ejemplo:**


```
Número: 457
Centenas: 4
Decenas: 5
Unidades: 7
```

**Orientación:**
- Centenas = numero / 100
- Decenas = (numero / 10) % 10
- Unidades = numero % 10

---

Calculá el precio final de un producto aplicando un descuento porcentual.

**Ejemplo:**


```
Precio original: 1000
Descuento (%): 15
Precio final: 850.00
```

**Orientación:**
- Descuento = precio × (porcentaje / 100.0)
- Precio final = precio - descuento
- Mostrá ambos valores

---

Leé dos números enteros `dividendo` y `divisor`. Mostrá el cociente entero, el
resto de la división (módulo) y el resultado de la división real (con decimales).

**Orientación:**
- Verificá que el divisor sea distinto de cero antes de realizar la operación
- Usá `/` para la división entera y `%` para el resto
- Convertí uno de los operandos a `double` mediante `(double)` para obtener el cociente con decimales


---

Convertí un número decimal a binario, octal y hexadecimal.

**Orientación:**
- Usá especificadores de formato: `%d`, `%o`, `%x`
- Mostrá el número en las cuatro bases
- Opcionalmente, implementá conversión manual con divisiones sucesivas



---

Calculá el área de un triángulo usando la fórmula de Herón dados los tres lados.

**Fórmula:** 
- s = (a + b + c) / 2
- área = √(s × (s-a) × (s-b) × (s-c))

**Orientación:**
- Verificá que los lados formen un triángulo válido (a + b > c, etc.)
- Usá `sqrt()` de `<math.h>`
- Compilá con `-lm` para enlazar la biblioteca matemática



---

Resolvé una ecuación cuadrática ax² + bx + c = 0, mostrando las raíces reales si
existen.

**Orientación:**
- Calculá el discriminante: Δ = b² - 4ac
- Si Δ < 0: no hay raíces reales
- Si Δ = 0: una raíz: x = -b / (2a)
- Si Δ > 0: dos raíces: x = (-b ± √Δ) / (2a)
- Usá `sqrt()` de `<math.h>`



---

Calculá el monto final de una inversión con interés compuesto.

**Fórmula:** A = P × (1 + r/n)^(n×t)

Donde:
- P = capital inicial
- r = tasa de interés anual (decimal)
- n = veces que se capitaliza por año
- t = tiempo en años

**Orientación:**
- Usá `pow()` de `<math.h>`
- Mostrá el monto inicial, final y la ganancia
- Compilá con `-lm`



---

Convertí un color RGB (rojo, verde, azul) a su representación hexadecimal.

**Ejemplo:**


```
Rojo (0-255): 255
Verde (0-255): 127
Azul (0-255): 80
Hexadecimal: #FF7F50
```

**Orientación:**
- Verificá que cada valor esté en rango 0-255
- Usá `printf("%02X", valor)` para formato hexadecimal
- Combiná los tres valores en formato #RRGGBB

---

Calculá base^exponente usando solo multiplicaciones (exponente entero positivo).

**Orientación:**
- Leé base (double) y exponente (int positivo)
- Usá un lazo para multiplicar base por sí misma exponente veces
- Considerá el caso especial cuando exponente = 0 (resultado = 1)
- **Spoiler:** Este ejercicio requiere lazos, pero podés usar multiplicaciones
  repetidas en línea



---

Creá una calculadora que realice operaciones avanzadas: potencia, raíz cuadrada,
seno, coseno, tangente, logaritmo.

**Orientación:**
- Mostrá un menú de opciones
- Leé la operación deseada y los operandos necesarios
- Usá funciones de `<math.h>`: `pow()`, `sqrt()`, `sin()`, `cos()`, `tan()`,
  `log()`
- Recordá que funciones trigonométricas usan radianes
- Verificá casos especiales (raíz de negativo, log de 0 o negativo, etc.)
- Compilá con `-lm`



---

## Notas Finales

:::{tip} Consejos Generales

- **Validación:** Siempre verificá entradas inválidas (divisiones por cero,
  valores fuera de rango)
- **Formato:** Usá `printf()` con especificadores apropiados (`%d`, `%f`, `%c`,
  etc.)
- **Constantes:** Definí valores fijos con `#define` o `const`
- **Comentarios:** Documentá qué hace cada sección del código
- **Testing:** Probá con diferentes entradas, incluyendo casos extremos

:::

:::{note} Compilación con Matemáticas

Para ejercicios que usan `<math.h>`, compilá con:
``` bash
gcc -Wall -Wextra -std=c99 programa.c -o programa -lm
```
El flag `-lm` enlaza la biblioteca matemática.

:::

Estas consignas cubren los conceptos fundamentales del Apunte 1: variables,
tipos de datos, operadores aritméticos, relacionales, lógicos, entrada/salida, y uso básico de
bibliotecas estándar.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Número de la Suerte
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__numero_de_la_suerte(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Entrada:** Leer un número entero.
- **Proceso:**
- Validar que la fecha contenga valores válidos de día, mes y año.
- Modularizar la suma sucesiva de dígitos en una función auxiliar pura.
- Validar que el nombre ingresado contenga caracteres legibles y no esté vacío.
- Dar formato especial a la salida con marcos en la terminal.
- Validar que el segundo número no sea cero antes de calcular el cociente.
- Modularizar cada operación aritmética en su propia función.
- Validar que las temperaturas no estén por debajo del cero absoluto.
- Modularizar las fórmulas en funciones con contratos y pruebas unitarias.
- Validar que ancho y alto sean positivos antes de calcular.
- Modularizar el cálculo en funciones independientes para área y perímetro.
- Validar los datos ingresados verificando el retorno de scanf.
- Modularizar el promedio en una función double calcular_promedio(double a, double b, double c).
- Implementar una función que reciba dos variables y muestre sus valores antes y después de operar.
- Verificar que el intercambio funcione correctamente para números negativos y cero.
- Modularizar cada conversión en funciones puras independientes.
- Formatear las unidades en una tabla comparativa alineada.
- Validar que peso y altura sean mayores a cero y clasificar según la tabla oficial de la OMS.
- Modularizar el cálculo en una función libre de operaciones de E/S.
- Validar que el monto sea un número entero no negativo.
- Permitir configurar las denominaciones de billetes en orden decreciente.
- Validar que la cantidad de segundos no sea negativa.
- Permitir incluir días si los segundos superan las 24 horas.
- Validar que el número ingresado esté exactamente en el rango [100, 999].
- Extender el algoritmo para números de cantidad variable de dígitos usando un lazo.
- Validar que el porcentaje de descuento esté en el rango [0, 100].
- Mostrar el desglose del ahorro total obtenido junto con el precio final.
- Validar que el divisor sea distinto de cero informando un mensaje de error descriptivo por consola.
- Modularizar el cálculo en una función pura que retorne el cociente y verifique la validez matemática.
- Validar que el número decimal ingresado sea no negativo.
- Modularizar la conversión a binario mediante divisiones sucesivas por 2 en un lazo.
- Validar la desigualdad triangular antes de aplicar la raíz cuadrada.
- Modularizar el cálculo del semiperímetro y del área en funciones separadas.
- Manejar los tres casos del discriminante (dos raíces reales, una raíz doble, raíces complejas).
- Validar que el coeficiente principal a no sea cero (en cuyo caso es una ecuación lineal).
- Validar que el capital, tasa de interés, frecuencia y tiempo sean positivos.
- Mostrar una tabla período por período con la evolución del capital acumulado.
- Validar que cada componente RGB esté en el rango [0, 255].
- Formatear la salida con ceros a la izquierda para asegurar siempre 6 dígitos hexadecimales (#RRGGBB).
- Manejar el caso especial de exponente 0 (resultado 1) y base 0 con exponente positivo.
- Extender la función para aceptar exponentes negativos retornando un double.
- Validar operaciones inválidas como división por cero, logaritmo de no positivos o raíz de negativos.
- Implementar un menú con lazo que permita realizar cálculos consecutivos hasta salir.
- **Validación:** Siempre verificá entradas inválidas (divisiones por cero, valores fuera de rango)
- **Formato:** Usá `printf()` con especificadores apropiados (`%d`, `%f`, `%c`, etc.)
- **Constantes:** Definí valores fijos con `#define` o `const`
- **Comentarios:** Documentá qué hace cada sección del código
- **Testing:** Probá con diferentes entradas, incluyendo casos extremos
:::
