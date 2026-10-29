**Tarea**: Usando la terminal, compilá y enlazá los archivos del ejercicio
anterior sin usar un Makefile.


## Automatización con Makefile

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Compilación manual
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_2_compilacion_manual(int val);

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
- **Compilar los archivos objeto (`.o`)**: Se usa la opción `-c` de `gcc` para compilar cada archivo fuente por separado. ```bash gcc -c main.c -o main.o gcc -c calculadora.c -o calculadora.o ```
- Enlazar los objetos: Se combinan los archivos objeto para crear el ejecutable final. ```bash gcc main.o calculadora.o -o mi_calculadora ``` errores de E/S con `ferror` y `feof`. archivo en todos los caminos de ejecución.
- Crear un script de bash build.sh que ejecute los pasos de compilación y enlace de forma secuencial.
- Probar qué ocurre si se modifica solo uno de los archivos .c y se recompila solo su .o.
:::
