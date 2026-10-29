:::{exercise}
:label: ej-ref-luhn-comprimido
El siguiente código implementa el algoritmo de validación de identificación
(Algoritmo de Luhn) para números enteros de longitud variable, pero fue ofuscado
deliberadamente en 4 líneas densas con asignaciones dobles y operadores
ternarios anidados:

``` c
int l(long long n){int s=0,c=0,d;while(n>0){d=n%10;if(c%2!=0){d*=2;if(d>9)d-=9;}s+=d;n/=10;c++;}return(s%10==0)?1:0;}
```

**Tu tarea:**
1. Desentrañar cómo opera el conteo de posiciones de derecha a izquierda y la
   duplicación alternada.
2. Identificar todos los code smells (nombres mudos `l, s, c, d`, ternario `?:`,
   falta de llaves Allman, falta de validación de entradas negativas).
3. Refactorizar el algoritmo en funciones modulares puras:
   - `int transformar_digito_luhn(int digito)`: multiplica por 2 y resta 9 si
     supera 9.
   - `bool validar_numero_luhn(long long numero_cuenta)`: calcula la suma total
     y verifica si es múltiplo de 10.
4. Escribir una suite de pruebas con `assert()` que verifique números válidos e
   inválidos reales (ej. `49927398716` es válido).

-   **[*plus ultra*]:** Documentar con contratos `@pre` y `@post`.
-   **[*plus ultra*]:** Validar que números $\le 0$ retornen `false`.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Algoritmo de Luhn Comprimido
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_o_de_luhn_comprimido(int val);

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
- Extraé la lógica de transformación de dígitos a una función auxiliar transformar_digito_luhn().
- Iterá los dígitos de derecha a izquierda alternando la duplicación en posiciones impares.
- Utilizá nombres de variables expresivos y estructura el código con llaves explícitas en estilo Allman.
:::
