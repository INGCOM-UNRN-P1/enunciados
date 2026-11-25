Implementá un TAD Union-Find para `n` elementos numerados de `0` a `n-1`. El objeto debe estar vacío o sin inicializar (no debe poseer reservas previas). `dsu_init` inicializa cada elemento como conjunto unitario; ante `n<=0` o fallo de reserva deja un TAD vacío. `dsu_find` retorna la raíz o `-1` ante índice inválido; `dsu_union` une por rango con compresión por mitades y no hace nada si un índice es inválido. Llamá `dsu_destroy` para liberar recursos y dejar el objeto vacío.

```{plantuml}
:caption: Un estado posible con `n = 6` y dos conjuntos, `{0, 1, 2, 3}` y `{4, 5}`. Cada elemento apunta a su padre y la raíz se apunta a sí misma: es el representante que devuelve `dsu_find`. Con compresión por mitades, `dsu_find(3)` hace que `3` pase a apuntar a su abuelo, `0`.
:width: 260px
@startdot
digraph G {
  rankdir=BT; node [shape=circle, fontname="monospace"];
  1 -> 0; 2 -> 0; 3 -> 2; 5 -> 4;
  0 -> 0; 4 -> 4;
}
@enddot
```

```{dibu}
:caption: El mismo estado en el arreglo de padres.
type: array
title: parent
values: [0, 0, 0, 2, 4, 4]
```
