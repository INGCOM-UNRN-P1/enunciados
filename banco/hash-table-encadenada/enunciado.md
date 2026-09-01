# Tabla Hash con Resolución por Encadenamiento

## 1. Consigna
Implementar una tabla Hash en C que almacene pares clave-valor (cadenas de texto a enteros) utilizando una matriz de punteros a listas enlazadas para resolver colisiones por encadenamiento (*chaining*).

El programa debe leer comandos por entrada estándar:
- `INSERT <clave> <valor>`: Inserta el par clave-valor. Si la clave ya existe, actualiza su valor.
- `GET <clave>`: Busca la clave e imprime su valor entero asociado, o `NO_ENCONTRADO` si no existe.
- `DELETE <clave>`: Elimina la clave y libera la memoria del nodo. Imprime `ELIMINADO` o `NO_ENCONTRADO`.
- `EXIT`: Libera toda la memoria y termina el programa limpiamente.

## 2. Entrada y Salida
- **Entrada (`stdin`):** Secuencia de comandos línea por línea.
- **Salida (`stdout`):** Resultados correspondientes a cada operación solicitada.
