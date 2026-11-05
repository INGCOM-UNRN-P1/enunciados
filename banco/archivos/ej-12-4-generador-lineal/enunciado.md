# Generador lineal

Implementá `int generar_lineal(const char *ruta, int cantidad, int inicio, int paso)`.
La función crea o sobrescribe el archivo indicado. La primera línea contiene
`cantidad`; a continuación escribe exactamente esa cantidad de enteros, uno por
línea, empezando en `inicio` y sumando `paso`. Por ejemplo, con
`("lineal.txt", 5, 10, 2)` se escriben `5`, `10`, `12`, `14`, `16`, `18`,
cada valor en su propia línea.

Devuelve `0` si la escritura y el cierre terminan bien y `-1` ante una ruta
nula, una cantidad negativa, un error de apertura/escritura/cierre o un valor que excedería el rango de `int`. La cantidad cero es válida y escribe solamente
`0\n`.
