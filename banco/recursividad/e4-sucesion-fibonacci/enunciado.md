# Sucesión de Fibonacci

Implementá las dos operaciones de forma recursiva. La sucesión se define como
`F(0) = 0`, `F(1) = 1` y `F(n) = F(n - 1) + F(n - 2)` para `n > 1`.

- `fibonacci(posicion)` retorna `F(posicion)`.
- `suma_fibonacci(hasta_posicion)` retorna `F(0) + ... + F(hasta_posicion)`, inclusive.
- Ambas funciones retornan `-1` para posiciones negativas. También retornan `-1`
  cuando el resultado no cabe en `int`: el máximo admitido es 46 para
  `fibonacci` y 44 para `suma_fibonacci`.

Las declaraciones públicas están en `ejercicio2.h`.

## Ejemplos

| Llamada | Retorno |
| --- | ---: |
| `fibonacci(7)` | `13` |
| `suma_fibonacci(4)` | `7` |
| `fibonacci(-1)` | `-1` |
