Diseñar esquemas de prefijos para estas librerías:

a) **Librería de gestión de base de datos**  
b) **Librería de compresión de archivos**  
c) **Librería de validación de entrada**  
d) **Librería de parseo JSON**

Para cada una:
- Proponer un prefijo corto pero descriptivo
- Listar 5 funciones típicas con el prefijo aplicado
- Justificar la elección del prefijo

**Ejemplo:**


``` c
// Librería de parseo JSON - prefijo: json_
json_parser_t *json_parser_crear(void);
json_value_t *json_parser_parse_string(json_parser_t *parser, const char *str);
bool json_value_es_objeto(const json_value_t *value);
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Diseño de Prefijos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_2_diseno_de_prefijos(int val);

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
