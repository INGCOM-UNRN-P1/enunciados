### Ejercicio 9.51 - Checksum de Paridad Longitudinal ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-checksum-paridad
Analizá el siguiente algoritmo que calcula la suma de verificación módulo 256
con residuo ajustado sobre un bloque de datos:

``` c
int chk(int d[],int n){int s=0;for(int i=0;i<n;i++)s=(s+d[i])%256;return(256-s)%256;}
```
<!-- c -->

**Tu tarea:**
1. Determinar cómo este checksum asegura que la suma de todos los datos más el
   checksum sea congruente con 0 módulo 256.
2. Refactorizar la función en estilo Allman con constantes simbólicas `#define
   MODULO_CHECKSUM 256`.
3. Validar entradas negativas o punteros nulos.
4. Escribir tests unitarios que verifiquen la invariante $\sum \text{datos} +
   \text{checksum} \equiv 0 \pmod{256}$.

:::
<!-- {exercise} -->

---
