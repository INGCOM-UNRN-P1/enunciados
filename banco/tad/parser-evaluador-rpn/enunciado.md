# Evaluador de Expresiones en Notación Polaca Inversa (RPN)

## 1. Consigna
Implementar un evaluador de expresiones aritméticas escritas en Notación Polaca Inversa (RPN / Postfija) utilizando un TAD Pila.

El programa debe leer líneas con expresiones RPN donde los tokens están separados por espacios.
Operadores binarios soportados: `+`, `-`, `*`, `/`.

Para cada línea leída:
- Si la expresión es válida y queda un único elemento final en la pila, imprime `RES: <valor>`.
- Si hay división por cero, imprime `ERROR: DIV_ZERO`.
- Si la sintaxis es inválida (faltan operandos o sobran valores al final), imprime `ERROR: SINTAXIS`.
- El comando `EXIT` termina el programa.
