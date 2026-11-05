#### Descripción

Implementá la raíz cuadrada entera de un entero no negativo usando el método
babilónico (Herón). El resultado es el mayor entero `r` tal que `r*r <= n`.
Además, informá cuántas iteraciones de Newton se realizaron. No uses punto
flotante: la iteración entera debe detenerse cuando la siguiente estimación ya
no sea menor que la actual.

### Contrato

```c
/* Devuelve floor(sqrt(n)); devuelve -1 si n < 0.
 * Si iteraciones no es NULL, guarda la cantidad de iteraciones efectuadas.
 */
int raiz_cuadrada_entera(int n, unsigned *iteraciones);
```

Para `n` entre 0 y `INT_MAX`, el resultado cabe en `int`. Para `n` igual a 0 o
1, el resultado es `n` y se requieren cero iteraciones. En caso de entrada
negativa se devuelve -1 y, si se pasó un puntero, se guarda cero.

### Ejemplos

| `n` | resultado | iteraciones |
|---:|---:|---:|
| 0 | 0 | 0 |
| 1 | 1 | 0 |
| 5 | 2 | 3 |
| 16 | 4 | 4 |

### Criterios de aceptación

- El resultado satisface `r*r <= n` y `(r+1)*(r+1) > n` para `n >= 0`.
- La iteración se realiza con aritmética entera y evita desbordar al verificar
  esas propiedades.
- Compila en C11 con `-Wall -Wextra -Werror`.
