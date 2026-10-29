### Ejercicio 3.38 - Ternas Pitagóricas ⭐⭐☆☆☆

#### Descripción
Implementar un programa que genere todas las ternas pitagóricas primitivas (`a^2
+ b^2 = c^2`, con `mcd(a,b,c)=1`) hasta un cierto límite para `c`, utilizando la
fórmula de Euclides.

:::{hint} Lógica y Consideraciones
-   **Fórmula de Euclides:** Todas las ternas primitivas se pueden generar a
    partir de dos enteros `m > n > 0`, coprimos y de paridad opuesta, usando las
    fórmulas:
    -   `a = m^2 - n^2`
    -   `b = 2mn`
    -   `c = m^2 + n^2`
-   **Proceso:** Iterar con `m` y `n` bajo las condiciones dadas y generar `a`,
    `b` y `c`.
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Encontrar todas las ternas pitagóricas primitivas con hipotenusa menor a un valor dado.
-   **[*plus ultra*]:** Verificar que a² + b² == c² para cada terna encontrada.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO ternas_pitagoricas(limite_c)
INICIO
    PARA m DESDE 2 HASTA RAIZ_CUADRADA(limite_c) HACER
        PARA n DESDE 1 HASTA m-1 HACER
            SI (m - n) MOD 2 == 1 Y mcd(m, n) == 1 ENTONCES
                a = m*m - n*n
                b = 2*m*n
                c = m*m + n*n
                SI c <= limite_c ENTONCES
                    ESCRIBIR "(", a, ", ", b, ", ", c, ")"
                FIN SI
            FIN SI
        FIN PARA
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
