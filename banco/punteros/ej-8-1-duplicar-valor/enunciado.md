Implementar `void duplicar(int *numero)` para duplicar el valor apuntado por
`numero`, modificando así la variable original.

```c
int valor = 5;
duplicar(&valor);
/* valor ahora vale 10 */
```

La función recibe un puntero a un entero válido y se supone que el doble de su
valor puede representarse con `int`. No debe modificar ninguna otra variable.
