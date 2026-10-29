### Ejercicio 9.31 - Algoritmo de Luhn Comprimido ⭐⭐⭐⭐⭐

:::{exercise}
:label: ej-ref-luhn-comprimido
El siguiente código implementa el algoritmo de validación de identificación
(Algoritmo de Luhn) para números enteros de longitud variable, pero fue ofuscado
deliberadamente en 4 líneas densas con asignaciones dobles y operadores
ternarios anidados:

``` c
int l(long long n){int s=0,c=0,d;while(n>0){d=n%10;if(c%2!=0){d*=2;if(d>9)d-=9;}s+=d;n/=10;c++;}return(s%10==0)?1:0;}
```
<!-- c -->

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
<!-- {exercise} -->

---
