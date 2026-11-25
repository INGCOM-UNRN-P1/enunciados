Implementá una máquina de estados que determine si una cadena de bits tiene
una cantidad par de unos. La cadena vacía tiene cero unos y, por lo tanto,
paridad par.

```c
int paridad_de_unos(const char *bits);
```

`bits` apunta a una cadena terminada en NUL. Devolvé 1 si contiene una
cantidad par de unos, 0 si es impar y -1 si contiene algún carácter distinto
de `0` y `1`. Por ejemplo, `"1010"` devuelve 1 y `"1011"` devuelve 0.

```{plantuml}
:caption: El autómata de paridad: un `0` conserva el estado y un `1` lo cambia. Al terminar la cadena, `PAR` devuelve 1 e `IMPAR` devuelve 0; cualquier otro carácter corta con -1.
:width: 360px
hide empty description
[*] --> PAR
PAR --> PAR : 0
PAR --> IMPAR : 1
IMPAR --> IMPAR : 0
IMPAR --> PAR : 1
PAR --> [*] : fin / 1
IMPAR --> [*] : fin / 0
```

:::{hint} Ayuda
Usá dos estados; cada `1` cambia el estado y cada `0` lo conserva.
:::
