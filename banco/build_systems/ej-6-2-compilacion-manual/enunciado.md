### Ejercicio 6.2 - Compilación manual ⭐⭐☆☆☆

**Tarea**: Usando la terminal, compilá y enlazá los archivos del ejercicio
anterior sin usar un Makefile.

:::{hint} Pasos de Compilación
1.  **Compilar los archivos objeto (`.o`)**: Se usa la opción `-c` de `gcc` para
    compilar cada archivo fuente por separado.
    ```bash
    gcc -c main.c -o main.o
    gcc -c calculadora.c -o calculadora.o
    ```
2.  **Enlazar los objetos**: Se combinan los archivos objeto para crear el
    ejecutable final.
    ```bash
    gcc main.o calculadora.o -o mi_calculadora
    ```
    errores de E/S con `ferror` y `feof`.
    archivo en todos los caminos de ejecución.

-   **[*plus ultra*]:** Crear un script de bash build.sh que ejecute los pasos de compilación y enlace de forma secuencial.
-   **[*plus ultra*]:** Probar qué ocurre si se modifica solo uno de los archivos .c y se recompila solo su .o.

:::
<!-- {hint} Pasos de Compilación -->

## Automatización con Makefile
