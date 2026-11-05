Implementar un programa que pida un número `n` e imprima un triángulo rectángulo
de `n` filas de altura, construido con asteriscos.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO triangulo_asteriscos
ENTRADA: n (entero)

INICIO
    PARA fila DESDE 1 HASTA n HACER
        PARA columna DESDE 1 HASTA fila HACER
            ESCRIBIR "*" SIN SALTO DE LÍNEA
        FIN PARA
        ESCRIBIR SALTO DE LÍNEA
    FIN PARA
FIN

```

:::

:::{hint} Consideraciones Didácticas
- **Entrada:** Leer un entero `n` para la altura del triángulo.
- **Proceso:** Se necesitan dos lazos aninados.
- **Salida:** Después de que el lazo interior complete sus iteraciones para
- Parametrizar el carácter de dibujo permitiendo al usuario elegir el símbolo.
- Validar que la altura sea un entero positivo mayor o igual a 1.
:::

### Formato de entrada y salida

Leé un entero positivo `n`. La fila `i` contiene `i` asteriscos, sin espacios, seguida de un salto de línea. Una entrada no positiva o mal formada debe terminar con error.
