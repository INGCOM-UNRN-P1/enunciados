**Identificador:** `ejercicio1` | **Módulo:** Práctica 1

---

El “Hola, mundo!” es el primer paso tradicional en el aprendizaje de un nuevo lenguaje de programación. El objetivo es escribir el programa más simple posible que produzca una salida visible en la pantalla, confirmando que el compilador y el entorno de desarrollo están configurados y funcionando correctamente.

Escribir un programa que imprima `"Hola, mundo!"` en la pantalla seguido de un salto de línea.

---

- **Entrada (`stdin`):** Ninguna.
- **Salida (`stdout`):** El texto `Hola, mundo!` seguido de un salto de línea.

---

```text
Salida:
Hola, mundo!
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de ¡Hola mundo!
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_hola_mundo(int val);

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

:::{hint} Consideraciones Didácticas
- Recordá incluir <stdio.h> para disponer de la función printf.
- No olvides agregar el salto de línea \n al final del mensaje.
:::
