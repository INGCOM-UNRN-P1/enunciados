Escribir un programa que calcule el Índice de Masa Corporal (IMC) de una persona
y lo clasifique según las categorías de la OMS.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO calcular_imc
ENTRADA: peso_kg, altura_m (reales)
VARIABLES:
    imc (real)

INICIO
    LEER peso_kg, altura_m
    imc = peso_kg / (altura_m * altura_m)
    ESCRIBIR "Su IMC es: ", imc

    SI imc < 18.5 ENTONCES
        ESCRIBIR "Categoría: Bajo peso"
    SINO SI imc < 25 ENTONCES
        ESCRIBIR "Categoría: Normal"
    SINO SI imc < 30 ENTONCES
        ESCRIBIR "Categoría: Sobrepeso"
    SINO
        ESCRIBIR "Categoría: Obesidad"
    FIN SI
FIN

```

:::

:::{hint} Consideraciones Didácticas
- **Entrada:** Solicitar el peso en kilogramos (kg) y la altura en metros (m).
- **Proceso:**
- **Clasificación (ejemplo):**
- IMC < 18.5: Bajo peso
- 18.5 <= IMC < 25: Normal
- 25 <= IMC < 30: Sobrepeso
- IMC >= 30: Obesidad
- **Salida:** Mostrar el valor del IMC y la categoría de peso correspondiente.
- Validar que peso y altura sean estrictamente positivos.
- Modularizar la clasificación en una función independiente que retorne la categoría de IMC.
:::

### Formato de entrada y salida

Leé el peso en kilogramos y la altura en metros. Ambos deben ser positivos. Calculá `IMC = peso / (altura * altura)` e imprimí el valor con dos decimales y la categoría. Usá estos intervalos: menor que 18.5, “Bajo peso”; desde 18.5 y menor que 25, “Normal”; desde 25 y menor que 30, “Sobrepeso”; desde 30, “Obesidad”.
