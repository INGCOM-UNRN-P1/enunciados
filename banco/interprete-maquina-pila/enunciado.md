# Intérprete de Máquina Virtual de Pila

## 1. Consigna
Implementar un intérprete de máquina de pila (*Stack Machine*) para evaluación de secuencias de instrucciones.

Instrucciones soportadas:
- `PUSH <int>`: Empuja un número a la pila.
- `ADD`: Desapila dos valores $A$ y $B$, calcula $B + A$ y apila el resultado.
- `SUB`: Desapila dos valores $A$ y $B$, calcula $B - A$ y apila el resultado.
- `MUL`: Desapila dos valores $A$ y $B$, calcula $B \times A$ y apila el resultado.
- `DIV`: Desapila dos valores $A$ y $B$, calcula $B / A$. Si $A == 0$, emite `ERROR_DIV_ZERO`.
- `DUP`: Duplica el elemento superior de la pila.
- `SWAP`: Intercambia los dos elementos superiores de la pila.
- `POP`: Desapila e imprime el valor superior. Si la pila está vacía, imprime `ERROR_UNDERFLOW`.
- `PEEK`: Muestra el tope sin desapilar.
- `HALT`: Finaliza la ejecución.
