# Intersección entre Segmento de Recta y Círculo

Implementá la intersección entre un segmento cerrado y el disco cerrado definido por centro y radio. Retorná true si cualquier punto del segmento pertenece al disco: incluye interior y circunferencia. Un segmento completamente dentro también intersecta el disco aunque no cruce su circunferencia.

Contrato C11:

```c
typedef struct { double x, y; } punto2d_t;
typedef struct { punto2d_t centro; double radio; } circulo2d_t;
bool segmento_circulo_intersecta(punto2d_t a, punto2d_t b, circulo2d_t c);
```

Radio negativo es inválido y devuelve false. El segmento puede degenerar en un punto. Calculá el punto del segmento más cercano al centro limitando la proyección al intervalo cerrado [0,1] y compará la distancia con el radio.
