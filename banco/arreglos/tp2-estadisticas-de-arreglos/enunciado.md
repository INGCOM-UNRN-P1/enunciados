Calcular el promedio de los elementos de un arreglo de enteros haciendo uso
de la biblioteca libarreglos. Si el arreglo es nulo o la cantidad es 0,
debe retornar 0.0.

Determinar si un número entero buscado pertenece al arreglo haciendo uso
de la función arreglo_buscar de libarreglos.

Usa la biblioteca del ejercicio `tp2-libarreglos`.

### 📋 Contrato de las Funciones

```c
double calcular_promedio(const int arreglo[], size_t cantidad);

bool contiene_valor(const int arreglo[], size_t cantidad, int valor);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
