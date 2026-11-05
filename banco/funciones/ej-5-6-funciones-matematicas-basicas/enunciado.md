# Funciones Matemáticas Básicas

Implementá las funciones `sumar`, `restar`, `multiplicar` y `dividir` declaradas
en `ej-5-6-funciones-matematicas-basicas.h`. Las tres primeras reciben dos
`double` y retornan el resultado de su operación.

`dividir` recibe dos operandos y retorna el cociente. Si el divisor vale cero,
retorna `NAN` de `<math.h>`.

Las funciones no realizan entrada ni salida. En `main`, mostrá una calculadora
sencilla que use las cuatro operaciones.

Para la calculadora, leé dos números separados por un operador (`+`, `-`, `*`
o `/`), por ejemplo `7 / 2`. Mostrá el resultado con dos decimales. Si el
divisor es cero, mostrá `División por cero`; si el operador no es válido,
mostrá `Operación inválida`. Terminá cada resultado con un salto de línea.
