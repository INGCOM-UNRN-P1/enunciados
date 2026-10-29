Implementá un programa o módulo en C que solicite repetidamente una contraseña de caracteres al usuario hasta que coincida con un valor establecido de acceso seguro.

El programa debe gestionar el control de acceso de manera robusta, controlando las iteraciones del lazo e informando si el acceso fue concedido o denegado tras evaluar la entrada.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Contraseña de caracteres iterativa.
 * Precondiciones: val representa el parámetro de entrada del flujo o intentos máximos.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__de_caracteres_itera(int val);
```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Acceso correcto
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Límite nulo o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Buffer de entrada residual:** Limpiar el buffer de entrada para evitar lecturas residuales de saltos de línea al leer caracteres consecutivos.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar que los caracteres ingresados sean alfanuméricos.
- Limpiar el buffer de entrada para evitar lecturas residuales.
:::
