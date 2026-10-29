Implementar una función que sume dos `tiempo_t`. El resultado debe ser
normalizado para que los segundos y minutos no excedan 59.

- $S_{total} = t_1.segundos + t_2.segundos$
- $M_{acarreo} = S_{total} / 60$
- $S_{resultado} = S_{total} \% 60$
- $M_{total} = t_1.minutos + t_2.minutos + M_{acarreo}$
- $H_{acarreo} = M_{total} / 60$
- $M_{resultado} = M_{total} \% 60$
- $H_{resultado} = t_1.horas + t_2.horas + H_{acarreo}$

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma de Tiempos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_18_4_suma_de_tiempos(int val);

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
