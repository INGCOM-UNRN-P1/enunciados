# Estructura de Bitmap Compacto y Operaciones Bitwise

## 1. Consigna
Implementar una estructura de Bitmap (arreglo de bits compacto) que administre un rango de $N$ bits utilizando la mínima cantidad de memoria (`uint8_t` contiguos).

Comandos:
- `INIT <total_bits>`: Inicializa el bitmap a 0 con tamaño `<total_bits>`.
- `SET <bit_index>`: Enciende el bit en la posición indicada.
- `CLEAR <bit_index>`: Apaga el bit en la posición indicada.
- `TEST <bit_index>`: Imprime `1` si está encendido o `0` si está apagado.
- `COUNT`: Cuenta e imprime la cantidad total de bits encendidos en el bitmap.
- `EXIT`: Libera memoria y finaliza.
