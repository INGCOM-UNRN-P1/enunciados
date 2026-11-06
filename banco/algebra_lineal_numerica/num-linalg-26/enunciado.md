# Transformada rápida de Fourier (FFT) radix-2

Implementa la transformada discreta compleja directa (signo negativo en el exponente) in situ. `real[i]` e `imag[i]` contienen la entrada y reciben la salida. `n` debe ser una potencia de dos positiva. El orden de salida es natural, no bit-reversed.

## Interfaz
```c
int fft_radix2(double *real, double *imag, size_t n);
```

Devuelve 1 si transforma y 0 ante punteros nulos, tamaño que no sea potencia de dos, entradas no finitas o fallo de memoria. Los buffers `real` e `imag` deben ser disjuntos. Ante error, conserva los arreglos de entrada. La transformación no normaliza la salida.

## Casos de referencia

La FFT de `[1,1,1,1]` real produce `[4,0,0,0]` y componente imaginaria cero. Para `[1,0,0,0]`, ambas salidas son `[1,0,0,0]`. `n=3` debe rechazarse sin modificar los datos.
