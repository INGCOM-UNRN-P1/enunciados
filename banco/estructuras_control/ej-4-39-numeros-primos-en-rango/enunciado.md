Leé dos enteros positivos `A` y `B`, con `A <= B`, y mostrá todos los números primos del intervalo inclusivo entre ambos límites. Si el intervalo no contiene primos, mostrá solo el encabezado.

**Orientación:**
- Lazo externo: números de A a B, incluidos ambos extremos
- Lazo interno: verificar si es primo (función del ejercicio 9)
- Imprimí solo los primos, en orden creciente y separados por espacios

### Ejemplo

Entrada:
```text
10 20
```

Salida:
```text
Primos entre 10 y 20: 11 13 17 19
```



---

## Problemas de Validación y Control

### 📋 Contrato de las Funciones

```c
/*
 * Cuenta los primos del intervalo inclusivo [inicio, fin].
 * Devuelve -1 si algún límite no es positivo o inicio > fin.
 */
int contar_primos_en_rango(int inicio, int fin);

```

### 🧪 Ejemplos de Ejecución

La función `contar_primos_en_rango` permite comprobar la cantidad de primos encontrados; el programa imprime los primos en la salida estándar.

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar que los límites del rango sean positivos.
- Mostrar la cantidad de primos por cada decena en el rango.
:::
