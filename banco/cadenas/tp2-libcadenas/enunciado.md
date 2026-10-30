Una **cadena segura** en esta cátedra cumple cuatro principios:

1. **Capacidad explícita (`size_t capacidad`)**:  
   Toda función que reciba un búfer destino o inspeccione una cadena recibe la
   capacidad total en bytes del búfer en memoria física (incluyendo el byte del
   terminador).
2. **Garantía de terminación nula**:  
   Si `capacidad > 0`, el búfer destino queda **siempre finalizado con el
   carácter nulo `'\0'`** dentro de los límites válidos `[0, capacidad - 1]`.
3. **Inmunidad a desbordamientos (_Buffer Overflow_)**:  
   Jamás se escribe en el índice `capacidad` o superior. La longitud máxima de
   texto admisible es `capacidad - 1`.
4. **Reporte de truncamiento**:  
   Si el texto de origen excede el espacio disponible, se escriben los primeros
   `capacidad - 1` caracteres, se agrega `'\0'` y se retorna `false` (o un
   código de error) para alertar al llamador sobre la pérdida de datos.


| Operación         | Enfoque Clásico Inseguro (`<string.h>`)                            | Enfoque Seguro (`libcadenas`)                                                                                          |
| :---------------- | :----------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------- |
| **Copia**         | `strcpy(dst, src)`: Escribe sin límite hasta hallar `\0` en `src`. | `cadena_copiar(destino, capacidad, origen)`: Escribe como máximo `capacidad - 1`, asegura `\0` y reporta truncamiento. |
| **Concatenación** | `strcat(dst, src)`: Anexa sin verificar el espacio residual.       | `cadena_concatenar(destino, capacidad, origen)`: Verifica espacio disponible, anexa sin desbordar y asegura `\0`.      |
| **Medición**      | `strlen(s)`: Lee memoria indefinidamente si falta `\0`.            | `cadena_longitud(cadena, capacidad)`: No examina más de `capacidad` bytes en memoria.                                  |


- **Firma**:
  ```c
  size_t cadena_longitud(const char cadena[], size_t capacidad);
  ```
- **Descripción**: Cuenta caracteres antes de `'\0'`, inspeccionando a lo sumo
  `capacidad` bytes. Retorna `capacidad` si no hay terminador en ese rango.


- **Firma**:
  ```c
  bool cadena_copiar(char destino[], size_t capacidad, const char origen[]);
  ```
- **Descripción**: Copia `origen` en `destino`. Si trunca, coloca `'\0'` en
  `capacidad - 1` y retorna `false`. Retorna `true` si cupo completa.


- **Firma**:
  ```c
  bool cadena_concatenar(char destino[], size_t capacidad, const char origen[]);
  ```
- **Descripción**: Anexa `origen` a continuación del texto existente en
  `destino`, asegurando terminador nulo sin superar `capacidad`. Retorna `false`
  si truncó.


- **Firma**:
  ```c
  size_t cadena_a_mayusculas(char cadena[], size_t capacidad);
  ```
- **Descripción**: Convierte in-place caracteres minúsculas a mayúsculas dentro
  del límite de `capacidad`. Retorna el conteo de conversiones efectuadas.


- **Consigna**: Extraer una porción de `origen` a partir de `inicio`, copiando a
  lo sumo `cantidad` caracteres en un búfer destino seguro de tamaño acotado
  (`capacidad`).
- **Desafío de diseño**:
  - Garantizar terminador `\0` en destino y retorno de estado o conteo copiado.


- **Consigna**: Convertir un `int valor` (positivo, negativo o cero,
  contemplando `INT_MIN`) a caracteres ASCII decimales dentro de un búfer seguro
  acotado por `capacidad`.
- **Desafío de diseño**:
  - Manejar signo, dígitos y el caso extremo de `INT_MIN` sin desbordamiento.

### 📋 Contrato de las Funciones

```c
/*
 * Operación principal de cadena_longitud
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
size_t cadena_longitud(const char cadena[], size_t capacidad);

/*
 * Operación principal de cadena_copiar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool cadena_copiar(char destino[], size_t capacidad, const char origen[]);

/*
 * Operación principal de cadena_concatenar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool cadena_concatenar(char destino[], size_t capacidad, const char origen[]);

/*
 * Operación principal de cadena_a_mayusculas
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
size_t cadena_a_mayusculas(char cadena[], size_t capacidad);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Cadena estándar
```text
Entrada: "Algoritmos C11"
Salida: Cadena procesada
```
:::
:::{tab-item} Cadena vacía
```text
Entrada: ""
Salida: Longitud 0 / Código 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
