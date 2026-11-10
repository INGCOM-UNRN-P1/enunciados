# DSU cuyos nodos tienen nombres

Recibís una lista de nombres únicos y pares de nombres que deben pertenecer al mismo grupo. Buscá cada nombre directamente en la lista y uní sus conjuntos. Devolvé la cantidad final de grupos; un nombre nulo, desconocido o una reserva fallida produce `-1`. No se crean nombres nuevos a partir de los pares.

```c
int dsu18_contar_grupos(const char *const nombres[], size_t cantidad, const char *const pares[][2], size_t cantidad_pares);
```

Nombres `Ana,Beto,Caro` y par `Ana-Caro` producen dos grupos.
