Implementar funciones que tomen dos fracciones y retornen el resultado de la
operación.

- **Suma**: $$\frac{a}{b} + \frac{c}{d} = \frac{ad + bc}{bd}$$
- **Resta**: $$\frac{a}{b} - \frac{c}{d} = \frac{ad - bc}{bd}$$
- **Multiplicación**: $$\frac{a}{b} \times \frac{c}{d} = \frac{ac}{bd}$$
- **División**: $$\frac{a}{b} \div \frac{c}{d} = \frac{ad}{bc}$$

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Operaciones Aritméticas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_raciones_aritmeticas(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
- Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
:::
