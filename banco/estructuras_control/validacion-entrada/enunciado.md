**Dificultad:** ⭐⭐⭐☆☆

Escribir un programa que solicite al usuario un número entero en el rango $[1, 100]$. Si el valor ingresado se encuentra fuera de rango, debe volver a pedirlo reiteradamente hasta que se ingrese un valor válido.

## Entrada
Una secuencia de números enteros hasta que se ingrese uno en el intervalo $[1, 100]$.

## Salida
Antes de cada lectura imprimí `Ingrese un número entre 1 y 100: `. Para un entero fuera de rango imprimí `Valor fuera de rango. Reintente.` y un salto de línea. Al recibir uno válido imprimí `Número válido ingresado: ` seguido del número y un salto de línea. Si no es posible leer otro entero, terminá con código de salida distinto de cero.

### Ejemplo
- **Entrada:**
  ```text
  -5
  120
  42
  ```
- **Salida:** Acepta el valor `42` y finaliza.
