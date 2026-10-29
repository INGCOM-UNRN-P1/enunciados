Implementar una función que procese transiciones de estado. La función debe
recibir el estado actual y un evento, y retornar el nuevo estado según las
reglas de transición.



```{code-block} c
:linenos:
enum evento_red
{
    EVENTO_CONECTAR,
    EVENTO_DESCONECTAR,
    EVENTO_TIMEOUT,
    EVENTO_ERROR
};
enum estado_red procesar_evento(enum estado_red estado,
                                enum evento_red evento);
```

**Reglas de transición sugeridas:**
- `DESCONECTADO` + `EVENTO_CONECTAR` → `CONECTANDO`
- `CONECTANDO` + `EVENTO_TIMEOUT` → `ERROR_TIMEOUT`
- `CONECTANDO` + `EVENTO_ERROR` → `ERROR_AUTH`
- `CONECTADO` + `EVENTO_DESCONECTAR` → `DESCONECTANDO`
- `DESCONECTANDO` + transición completa → `DESCONECTADO`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Máquina de estados
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_4_maquina_de_estados(int val);

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
- Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
- Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
:::
