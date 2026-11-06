# Transpuesta por bloques

Transpone in situ una matriz cuadrada n×n usando bloques y solo intercambia cada elemento situado sobre la diagonal con su simétrico.

## Firma requerida

```c
void transponer_bloques(double **matriz, int n, int tam_bloque);
```

## Memoria, errores y terminación

La matriz y sus filas son propiedad de quien llama y no se asigna ni libera memoria. Si matriz es NULL, n<=0 o tam_bloque<=0, la función no realiza cambios.
