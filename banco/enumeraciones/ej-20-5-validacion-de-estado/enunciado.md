Implementar una función que valide si un valor numérico corresponde a un estado
válido de la enumeración. Usar el patrón del valor centinela.



```{code-block} c
:linenos:
enum estado_red
{
    DESCONECTADO,
    CONECTANDO,
    CONECTADO,
    DESCONECTANDO,
    ERROR_TIMEOUT,
    ERROR_AUTH,
    _ESTADO_MAX // Valor centinela
};
bool estado_valido(int valor);
```

## Sistema de Permisos con Flags

Implementar un sistema de permisos usando flags de bits. Este ejercicio
demuestra cómo combinar múltiples opciones en un único valor.

```{code-block} c
:linenos:
enum permisos
{
    PERMISO_LECTURA = 1 << 0,   // 0x01
    PERMISO_ESCRITURA = 1 << 1, // 0x02
    PERMISO_EJECUCION = 1 << 2, // 0x04
    PERMISO_ELIMINAR = 1 << 3   // 0x08
};
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Validación de estado
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_validacion_de_estado(int val);

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
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
