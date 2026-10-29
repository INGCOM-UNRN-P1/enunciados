**Tarea**: Modificá tu proyecto para incluir mensajes de depuración que solo se
impriman cuando se compile en "modo debug".


Compilá un programa simple desde línea de comandos.

**Orientación:**


``` bash
gcc -o programa programa.c
./programa
```
- `-o` especifica nombre del ejecutable
- Sin `-o`, crea `a.out` por defecto

---

Compilá con warnings completos y corregí los problemas.

**Orientación:**


``` bash
gcc -Wall -Wextra -std=c99 -pedantic programa.c -o programa
```
- `-Wall`: warnings comunes
- `-Wextra`: warnings adicionales
- `-std=c99`: estándar C99
- `-pedantic`: estricto con estándar

---

Separáun programa en main.c y funciones.c.

**funciones.h:**


``` c
#ifndef FUNCIONES_H
#define FUNCIONES_H
int sumar(int a, int b);
#endif
```

**funciones.c:**
``` c
#include "funciones.h"
int sumar(int a, int b)
{
    return a + b;
}
```

**main.c:**
``` c
#include "funciones.h"
#include <stdio.h>
int main()
{
    printf("%d\n", sumar(3, 4));
}
```

**Compilación:**
``` bash
gcc -c funciones.c    # Genera funciones.o
gcc -c main.c         # Genera main.o
gcc funciones.o main.o -o programa
```

---

Explicá por qué se necesitan include guards y implementalos.

**Orientación:**


``` c
#ifndef MI_HEADER_H
#define MI_HEADER_H
// Contenido del header
#endif // MI_HEADER_H
```
- Previene inclusión múltiple
- Evita errores de redefinición

---

Creá Makefile para compilar proyecto de ejercicio 3.

**Makefile:**


```{code-block} makefile
:linenos:
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

programa: main.o funciones.o
	$(CC) main.o funciones.o -o programa

main.o: main.c funciones.h
	$(CC) $(CFLAGS) -c main.c

funciones.o: funciones.c funciones.h
	$(CC) $(CFLAGS) -c funciones.c

clean:
	rm -f *.o programa

```

**Uso:**
``` bash
make           # Compila
make clean     # Limpia
```

---

Creá biblioteca con funciones matemáticas: factorial, potencia, fibonacci.

**Estructura:**


```
proyecto/
├── matematica.h
├── matematica.c
├── test.c
└── Makefile
```

**Orientación:**
- `matematica.h`: declaraciones
- `matematica.c`: implementaciones
- `test.c`: programa que usa la biblioteca

---

Compilá con diferentes niveles de optimización y medí diferencia.

**Orientación:**


``` bash
gcc -O0 programa.c -o prog_O0  # Sin optimización
gcc -O1 programa.c -o prog_O1  # Básica
gcc -O2 programa.c -o prog_O2  # Recomendada
gcc -O3 programa.c -o prog_O3  # Agresiva
```
- Medí tiempo de ejecución: `time ./prog_O2`
- `-O0` útil para debugging
- `-O2` balance entre velocidad y tamaño
- `-O3` máxima optimización

---

Usá directivas de preprocesador para debug opcional.

**Orientación:**


``` c
#ifdef DEBUG
printf("Debug: valor = %d\n", valor);
#endif
```

**Compilación:**
``` bash
gcc -DDEBUG programa.c -o programa  # Con debug
gcc programa.c -o programa           # Sin debug
```

---

Creá módulo `utils` con funciones de uso general: intercambio, mínimo, máximo.

**Estructura:**


```{code-block} c
:linenos:
// utils.h
#ifndef UTILS_H
#define UTILS_H
void intercambiar(int *a, int *b);
int minimo(int a, int b);
int maximo(int a, int b);
#endif
// utils.c
#include "utils.h"
// Implementaciones...
// main.c
#include "utils.h"
// Uso...
```

---

Mejorá Makefile usando variables y patrones.

**Makefile:**


```{code-block} makefile
:linenos:
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -O2
LDFLAGS = -lm

SRCS = main.c utils.c matematica.c
OBJS = $(SRCS:.c=.o)
TARGET = programa

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean

```

---

Generá dependencias automáticamente con gcc.

**Orientación:**


``` makefile
DEPS = $(OBJS:.o=.d)

-include $(DEPS)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
```
- `-MMD`: genera archivo .d con dependencias
- `-MP`: crea targets phony para headers

---

Creá biblioteca estática (.a) y usala en programa.

**Orientación:**


```{code-block} bash
:linenos:
# Compilar objetos
gcc -c modulo1.c modulo2.c

# Crear biblioteca estática
ar rcs libmibiblioteca.a modulo1.o modulo2.o

# Usar biblioteca
gcc main.c -L. -lmibiblioteca -o programa

```
- `ar`: archiver, crea bibliotecas
- `-L.`: buscar bibliotecas en directorio actual
- `-lmibiblioteca`: enlazar con libmibiblioteca.a

---

Creá biblioteca compartida (.so) y usala.

**Orientación:**


```{code-block} bash
:linenos:
# Compilar con PIC (Position Independent Code)
gcc -fPIC -c modulo.c

# Crear biblioteca compartida
gcc -shared modulo.o -o libmodulo.so

# Compilar programa
gcc main.c -L. -lmodulo -o programa

# Ejecutar (necesita encontrar .so)
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
./programa

```

---

Organizá proyecto en directorios: src/, include/, obj/, bin/.

**Estructura:**


```
proyecto/
├── src/
│   ├── main.c
│   └── modulo.c
├── include/
│   └── modulo.h
├── obj/        (generado)
├── bin/        (generado)
└── Makefile
```

**Makefile:**
```{code-block} makefile
:linenos:
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin

CFLAGS = -I$(INCDIR) -Wall -Wextra

SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))

$(BINDIR)/programa: $(OBJS) | $(BINDIR)
	$(CC) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR) $(BINDIR):
	mkdir -p $@

```

---

Agregá targets útiles: run, test, install, uninstall.

**Makefile:**


```{code-block} makefile
:linenos:
run: $(TARGET)
	./$(TARGET)

test: $(TARGET)
	./$(TARGET) test_input.txt

install: $(TARGET)
	install -m 755 $(TARGET) /usr/local/bin/

uninstall:
	rm -f /usr/local/bin/$(TARGET)

.PHONY: run test install uninstall

```

---

Makefile con modo debug y release.

**Makefile:**


```{code-block} makefile
:linenos:
MODE ?= release

ifeq ($(MODE),debug)
    CFLAGS += -g -O0 -DDEBUG
    TARGET = programa_debug
else
    CFLAGS += -O2 -DNDEBUG
    TARGET = programa
endif

all: $(TARGET)
	@echo "Compiled in $(MODE) mode"

# Uso:
# make              # Release
# make MODE=debug   # Debug

```

---

Integrá herramientas de análisis en Makefile.

**Makefile:**


```{code-block} makefile
:linenos:
check: $(SRCS)
	cppcheck --enable=all $(SRCS)

format: $(SRCS)
	clang-format -i $(SRCS)

valgrind: $(TARGET)
	valgrind --leak-check=full ./$(TARGET)

.PHONY: check format valgrind

```

---

Configurá cross-compilation para diferentes arquitecturas.

**Makefile:**


```{code-block} makefile
:linenos:
# Compilación nativa
CC_NATIVE = gcc
TARGET_NATIVE = programa

# Cross-compilation para ARM
CC_ARM = arm-linux-gnueabi-gcc
TARGET_ARM = programa_arm

arm: CC = $(CC_ARM)
arm: TARGET = $(TARGET_ARM)
arm: $(TARGET)

native: CC = $(CC_NATIVE)
native: TARGET = $(TARGET_NATIVE)
native: $(TARGET)

```

---

Proyecto completo con múltiples bibliotecas y tests.

**Estructura:**


```
proyecto/
├── lib/
│   ├── util/
│   │   ├── util.h
│   │   └── util.c
│   └── math/
│       ├── math.h
│       └── math.c
├── src/
│   └── main.c
├── tests/
│   ├── test_util.c
│   └── test_math.c
└── Makefile
```

**Orientación:**
- Compilar bibliotecas separadamente
- Enlazar con main
- Target para tests
- Target para todo (all)

---

Convertí proyecto a usar CMake en lugar de Makefile.

**CMakeLists.txt:**


```{code-block} cmake
:linenos:
cmake_minimum_required(VERSION 3.10)
project(MiProyecto C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

include_directories(include)

add_executable(programa
    src/main.c
    src/modulo.c
)

target_link_libraries(programa m)

# Tests
enable_testing()
add_executable(tests tests/test_main.c)
add_test(NAME tests COMMAND tests)

```

**Uso:**
``` bash
mkdir build
cd build
cmake ..
make
./programa
```

---

## Notas Finales

:::{tip} Proceso de Compilación

**Etapas:**
1. **Preprocesamiento:** Expande #include, #define
   - `gcc -E programa.c` para ver resultado
2. **Compilación:** C → Assembly
   - `gcc -S programa.c` genera programa.s
3. **Ensamblado:** Assembly → Código objeto
   - `gcc -c programa.c` genera programa.o
4. **Enlazado:** Objetos + bibliotecas → Ejecutable
   - `gcc programa.o -o programa`

**Flags útiles:**
- `-E`: Solo preprocesar
- `-S`: Generar assembly
- `-c`: Compilar sin enlazar
- `-o`: Especificar nombre de salida
- `-I`: Agregar directorio de includes
- `-L`: Agregar directorio de bibliotecas
- `-l`: Enlazar con biblioteca

:::

:::{note} Sintaxis de Makefile

**Regla básica:**
``` makefile
target: dependencias
	comando
```
- **target:** Archivo a generar
- **dependencias:** Archivos necesarios
- **comando:** Qué ejecutar (debe empezar con TAB)

**Variables:**
``` makefile
CC = gcc
CFLAGS = -Wall

$(CC) $(CFLAGS) programa.c
```

**Variables automáticas:**
- `$@`: Target
- `$<`: Primera dependencia
- `$^`: Todas las dependencias
- `$*`: Stem (parte que coincide con %)

**Patrones:**
``` makefile
%.o: %.c
	$(CC) -c $< -o $@
```

:::

:::{warning} Errores Comunes

1. **Olvidar include guard:**
   ```c
   // Sin guard, múltiples inclusiones causan error
   #ifndef HEADER_H
   #define HEADER_H
   // ...
   #endif
   ```

2. **Orden de enlazado:**
   ```bash
   # MAL
   gcc -lm programa.c
   
   # BIEN
   gcc programa.c -lm
   ```
   - Bibliotecas después de los archivos que las usan

3. **Espacios en lugar de TAB en Makefile:**
   ```makefile
   target:
       comando  # MAL: espacios
   	comando  # BIEN: TAB
   ```

4. **Incluir .c en vez de .h:**
   ```c
   #include "modulo.c" // MAL
   #include "modulo.h" // BIEN
   ```

:::

:::{tip} Mejores Prácticas

1. **Headers:**
   - Siempre usar include guards
   - Solo declaraciones en .h
   - Documentar funciones públicas

2. **Separación:**
   - Un .c por módulo lógico
   - Header correspondiente para cada .c
   - main.c mínimo, lógica en módulos

3. **Makefile:**
   - Variables para CC, CFLAGS
   - Target `clean` siempre
   - `.PHONY` para targets sin archivo
   - Dependencias correctas

4. **Compilación:**
   - Siempre `-Wall -Wextra`
   - `-g` para debugging
   - `-O2` para release
   - `-std=c99` o superior

:::

:::{note} Herramientas Útiles

**Análisis:**
- `cppcheck`: Análisis estático
- `valgrind`: Detección de memory leaks
- `gdb`: Debugger
- `clang-format`: Formateo automático

**Build Systems:**
- `make`: Clásico, universal
- `cmake`: Moderno, cross-platform
- `autotools`: GNU standard (configure, make, make install)
- `ninja`: Muy rápido

**Comandos útiles:**
```{code-block} bash
:linenos:
# Ver símbolos en objeto
nm programa.o

# Ver bibliotecas dinámicas necesarias
ldd programa

# Ver tamaño de secciones
size programa

# Desensamblar
objdump -d programa.o

```

:::

Estas consignas cubren compilación desde comandos básicos hasta proyectos
complejos multi-archivo con automatización profesional.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Mensajes de depuración
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_nsajes_de_depuracion(int val);

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
- En el código: Encerrá tus `printf` de depuración dentro de bloques de preprocesador: ```c #ifdef DEBUG printf("[DEBUG] La función sumar fue llamada con a=%d, b=%d\n", a, b); #endif ```
- En el Makefile: Modificá la regla de compilación para que se pueda pasar una bandera al compilador. La opción `-D` de `gcc` permite definir una macro desde la línea de comandos. ```makefile # Añadir una variable para las macros CPPFLAGS = # Modificar la regla de compilación %.o: %.c $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@ ```
- Uso: Ahora podés compilar normalmente (`make`) o en modo debug (`make CPPFLAGS=-DDEBUG`). errores de E/S con `ferror` y `feof`. archivo en todos los caminos de ejecución.
- Agregar múltiples niveles de depuración (ej. DEBUG=1, DEBUG=2) utilizando directivas #if DEBUG >= 1.
- Probar la compilación tanto en modo normal como en modo depuración.
- Compilar con el flag -o especificando un nombre descriptivo para el binario resultante.
- Ejecutar el programa y verificar su código de salida con echo $? en la terminal.
- Agregar los flags -Werror -Wpedantic y verificar que el código compile limpiamente sin advertencias.
- Identificar y corregir advertencias comunes como variables no utilizadas o conversiones implícitas.
- Estructurar los archivos en subdirectorios src/ e include/ y compilar con -Iinclude.
- Añadir una tercera función en un módulo adicional utilidades.c y enlazar todos los objetos.
- Explicar mediante un comentario qué problema de compilación ocurre si se omite la guarda de inclusión.
- Probar qué sucede al incluir dos veces el mismo header en main.c.
- Usar variables automáticas ($@, $<) en las reglas del Makefile para simplificar los comandos.
- Declarar el target clean como .PHONY.
- Compilar enlazando con la biblioteca matemática estándar usando el flag -lm.
- Crear un Makefile que compile y ejecute los ejemplos matemáticos automáticamente.
- Comparar el tiempo de ejecución del programa compilado con -O0 frente a -O2 o -O3.
- Inspeccionar el tamaño del binario resultante con cada nivel de optimización.
- Definir macros de preprocesador mediante el flag -D (ej. -DVERSION="1.0.0").
- Crear targets separados en el Makefile para compilar con distintas configuraciones.
- Crear una suite de pruebas en test_utilidades.c que verifique cada función con assert().
- Agregar un target test en el Makefile que compile y corra las pruebas automáticamente.
- Organizar el Makefile con variables CC, CFLAGS, LDFLAGS y OBJS.
- Permitir sobrescribir variables desde la línea de comandos (ej. make CC=clang).
- Usar los flags de gcc -MMD -MP para generar archivos de dependencias .d automáticamente.
- Incluir los archivos .d en el Makefile mediante la directiva -include.
- Crear una biblioteca estática (.a) utilizando la herramienta ar rcs.
- Enlazar el ejecutable principal contra la biblioteca estática creada.
- Crear una biblioteca compartida (.so) compilando con -fPIC y enlazando con -shared.
- Ejecutar el programa configurando LD_LIBRARY_PATH.
- Organizar el proyecto con estructura src/, include/, obj/, bin/.
- Crear un Makefile que cree automáticamente los directorios obj/ y bin/ si no existen.
- Agregar targets adicionales como help, info y format en el Makefile.
- Asegurar que todos los targets auxiliares estén listados en .PHONY.
- Definir reglas separadas en el Makefile para compilar en modo Debug (-g -O0) y Release (-O2 -DNDEBUG).
- Colocar los binarios de cada perfil en carpetas de salida separadas (bin/debug/ y bin/release/).
- Ejecutar herramientas de análisis como cppcheck o clang-tidy sobre los archivos fuente.
- Integrar un target check o lint en el Makefile para correr el análisis estático.
- Configurar el Makefile para soportar compilación cruzada especificando el prefijo CROSS_COMPILE.
- Verificar que la arquitectura de destino sea configurable mediante una variable.
- Diseñar un Makefile modular y completo que incluya compilación, tests, documentación y empaquetado.
- Asegurar que make clean limpie absolutamente todos los artefactos intermedios generados.
- Crear un archivo CMakeLists.txt básico que defina el proyecto, ejecutables y bibliotecas.
- Generar y compilar el proyecto en un directorio build/ separado.
- **Preprocesamiento:** Expande #include, #define
- `gcc -E programa.c` para ver resultado
- **Compilación:** C → Assembly
- `gcc -S programa.c` genera programa.s
- **Ensamblado:** Assembly → Código objeto
- `gcc -c programa.c` genera programa.o
- **Enlazado:** Objetos + bibliotecas → Ejecutable
- `gcc programa.o -o programa` **Flags útiles:**
- `-E`: Solo preprocesar
- `-S`: Generar assembly
- `-c`: Compilar sin enlazar
- `-o`: Especificar nombre de salida
- `-I`: Agregar directorio de includes
- `-L`: Agregar directorio de bibliotecas
- `-l`: Enlazar con biblioteca
- **Headers:**
- Siempre usar include guards
- Solo declaraciones en .h
- Documentar funciones públicas
- **Separación:**
- Un .c por módulo lógico
- Header correspondiente para cada .c
- main.c mínimo, lógica en módulos
- **Makefile:**
- Variables para CC, CFLAGS
- Target `clean` siempre
- `.PHONY` para targets sin archivo
- Dependencias correctas
- **Compilación:**
- Siempre `-Wall -Wextra`
- `-g` para debugging
- `-O2` para release
- `-std=c99` o superior
:::
