Definir una `struct` que contenga miembros de tipo puntero (ej. `char* nombre`,
`int* notas`). Escribir una función de "clonación profunda" que cree una copia
completamente nueva e independiente de la `struct`, incluyendo la reserva de
nueva memoria para los datos a los que apuntan los punteros.

### Contrato de las funciones

```c
ficha_t *ficha_clonar(const ficha_t *original);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

```{plantuml}
:caption: Copia superficial frente a clonación profunda. Copiar el struct (`*copia = *original`) duplica los punteros, que siguen apuntando a los mismos bloques: liberar uno deja al otro colgando. `ficha_clonar` reserva bloques nuevos para `nombre` y `notas` y copia su contenido.
@startdot
digraph G {
  rankdir=LR; node [fontname="monospace", shape=record]; edge [fontname="monospace"];
  subgraph cluster_prof { label="ficha_clonar"; fontname="monospace";
    o2 [label="original|<n>nombre|<t>notas|cantidad_notas = 3"];
    c2 [label="clon|<n>nombre|<t>notas|cantidad_notas = 3"];
    p1 [label="\"Ana\\0\""]; p2 [label="7|9|8"];
    q1 [label="\"Ana\\0\""]; q2 [label="7|9|8"];
    o2:n -> p1; o2:t -> p2; c2:n -> q1; c2:t -> q2;
  }
  subgraph cluster_sup { label="copia superficial"; fontname="monospace";
    o1 [label="original|<n>nombre|<t>notas|cantidad_notas = 3"];
    c1 [label="copia|<n>nombre|<t>notas|cantidad_notas = 3"];
    s1 [label="\"Ana\\0\""]; s2 [label="7|9|8"];
    o1:n -> s1; o1:t -> s2; c1:n -> s1 [color=red]; c1:t -> s2 [color=red];
  }
}
@enddot
```

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
