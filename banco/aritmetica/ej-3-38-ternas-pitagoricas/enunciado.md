#### Descripción
Implementar un programa que genere todas las ternas pitagóricas primitivas (`a^2
+ b^2 = c^2`, con `mcd(a,b,c)=1`) hasta un cierto límite para `c`, utilizando la
fórmula de Euclides.


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

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Ternas Pitagóricas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_8_ternas_pitagoricas(int val);

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
- **Fórmula de Euclides:** Todas las ternas primitivas se pueden generar a partir de dos enteros `m > n > 0`, coprimos y de paridad opuesta, usando las fórmulas:
- `a = m^2 - n^2`
- `b = 2mn`
- `c = m^2 + n^2`
- **Proceso:** Iterar con `m` y `n` bajo las condiciones dadas y generar `a`, `b` y `c`. valores fuera de rango o tipos inválidos. un lazo hasta que el usuario elija finalizar.
- Encontrar todas las ternas pitagóricas primitivas con hipotenusa menor a un valor dado.
- Verificar que a² + b² == c² para cada terna encontrada.
:::
