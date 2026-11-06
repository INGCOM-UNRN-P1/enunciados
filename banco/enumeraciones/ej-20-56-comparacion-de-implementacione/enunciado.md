# 56 Comparacion De Implementacione

Compará tres representaciones del día: enum ordinal (valores 1–7), índice compacto 0–6 y máscara de flags (potencias de dos). Las funciones permiten observar sus representaciones y rango válido.

```c
enum dia { LUNES=1,MARTES=2,MIERCOLES=3,JUEVES=4,VIERNES=5,SABADO=6,DOMINGO=7 };
size_t tamanio_enum_dia(void);
int dia_a_indice(enum dia dia);
unsigned int mascara_dia(enum dia dia);
```

Compará los tres enfoques en cuanto a casos de uso, ventajas y desventajas, incluyendo la posibilidad de combinar varios días mediante flags.
