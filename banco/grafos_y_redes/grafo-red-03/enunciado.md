# Conversión entre Matriz y Lista de Adyacencia

Implementá conversiones en ambos sentidos para grafos simples no dirigidos de hasta 20 vértices. En las listas, cada fila contiene vecinos en orden estrictamente ascendente y se completa con -1. Una lista inválida (vecino fuera de rango, repetido, desordenado, lazo o falta de simetría) debe rechazarse con -1. Las conversiones válidas devuelven 0.

```c
int matriz_a_listas(size_t n, const int matriz[20][20], int listas[20][20]);
int listas_a_matriz(size_t n, const int listas[20][20], int matriz[20][20]);
```
