Implementar una función que retorne el día siguiente al día proporcionado. El día siguiente a `DOMINGO` es `LUNES`.

```c
enum dia_semana dia_siguiente(enum dia_semana dia_actual);
```

Los días se representan en el orden `LUNES`, `MARTES`, `MIERCOLES`, `JUEVES`, `VIERNES`, `SABADO`, `DOMINGO`. Para un valor fuera de la enumeración, retornar el valor recibido.
