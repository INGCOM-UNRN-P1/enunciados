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

### Comparación de Seguridad

| Operación         | Enfoque Clásico Inseguro (`<string.h>`)                            | Enfoque Seguro (`libcadenas`)                                                                                          |
| :---------------- | :----------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------- |
| **Copia**         | `strcpy(dst, src)`: Escribe sin límite hasta hallar `\0` en `src`. | `cadena_copiar(destino, capacidad, origen)`: Escribe como máximo `capacidad - 1`, asegura `\0` y reporta truncamiento. |
| **Concatenación** | `strcat(dst, src)`: Anexa sin verificar el espacio residual.       | `cadena_concatenar(destino, capacidad, origen)`: Verifica espacio disponible, anexa sin desbordar y asegura `\0`.      |
| **Medición**      | `strlen(s)`: Lee memoria indefinidamente si falta `\0`.            | `cadena_longitud(cadena, capacidad)`: No examina más de `capacidad` bytes en memoria.                                  |

### Ejercicio B.1: Medición de longitud

- **Firma**:
  ```c
  size_t cadena_longitud(const char cadena[], size_t capacidad);
  ```
- **Descripción**: Cuenta caracteres antes de `'\0'`, inspeccionando a lo sumo
  `capacidad` bytes. Retorna `capacidad` si no hay terminador en ese rango.

### Ejercicio B.2: Copia con control de Búfer

- **Firma**:
  ```c
  bool cadena_copiar(char destino[], size_t capacidad, const char origen[]);
  ```
- **Descripción**: Copia `origen` en `destino`. Si trunca, coloca `'\0'` en
  `capacidad - 1` y retorna `false`. Retorna `true` si cupo completa.

### Ejercicio B.3: Concatenación

- **Firma**:
  ```c
  bool cadena_concatenar(char destino[], size_t capacidad, const char origen[]);
  ```
- **Descripción**: Anexa `origen` a continuación del texto existente en
  `destino`, asegurando terminador nulo sin superar `capacidad`. Retorna `false`
  si truncó.

### Ejercicio B.4: Normalización a mayúsculas

- **Firma**:
  ```c
  size_t cadena_a_mayusculas(char cadena[], size_t capacidad);
  ```
- **Descripción**: Convierte in-place caracteres minúsculas a mayúsculas dentro
  del límite de `capacidad`. Retorna el conteo de conversiones efectuadas.

### Ejercicio B.5: Subcadena Segura (_slice_)

- **Consigna**: Extraer una porción de `origen` a partir de `inicio`, copiando a
  lo sumo `cantidad` caracteres en un búfer destino seguro de tamaño acotado
  (`capacidad`).
- **Desafío de diseño**:
  - Garantizar terminador `\0` en destino y retorno de estado o conteo copiado.

### Ejercicio B.6: Entero a Cadena Decimal (_itoa seguro_)

- **Consigna**: Convertir un `int valor` (positivo, negativo o cero,
  contemplando `INT_MIN`) a caracteres ASCII decimales dentro de un búfer seguro
  acotado por `capacidad`.
- **Desafío de diseño**:
  - Manejar signo, dígitos y el caso extremo de `INT_MIN` sin desbordamiento.

### 📋 Contrato de las Funciones

```c
size_t cadena_longitud(const char cadena[], size_t capacidad);

bool cadena_copiar(char destino[], size_t capacidad, const char origen[]);

bool cadena_concatenar(char destino[], size_t capacidad, const char origen[]);

size_t cadena_a_mayusculas(char cadena[], size_t capacidad);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
