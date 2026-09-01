### Ejercicio 13.2 - b.1 - Escribir un diario personal ⭐⭐☆☆☆

:::{exercise}
:label: ejercicio_archivos_1
:enumerator: 1

**Escribir un diario personal**

Creá una función que reciba el nombre de un archivo y una cadena de texto. La
función debe abrir el archivo en modo "append" (añadir) y escribir la cadena de
texto seguida de un salto de línea. Asegurate de manejar todos los posibles
errores de apertura, escritura y cierre.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {exercise} -->

::::{solution} ejercicio_archivos_1
:class: dropdown

:::{code-block}c
:linenos:
#include <stdio.h>
#include <stdlib.h>
#define EXITO 0
#define ERROR -1
/**
 * Agrega una entrada de texto a un archivo de diario.
 *
 * @param nombre_archivo La ruta del archivo de diario.
 *      #PRE: No puede ser NULL.
 * @param entrada El texto a agregar en el diario.
 *      #PRE: No puede ser NULL.
 *
 * @returns EXITO si la entrada se escribió correctamente, ERROR en caso
   contrario.
 *
 * @post El archivo especificado por nombre_archivo contendrá la nueva entrada
 *       al final del mismo, seguida de un salto de línea.
 */
int agregar_entrada_diario(const char *nombre_archivo, const char *entrada)
{
    // 1. Abrir el archivo en modo "append" (añadir)
    FILE *p_archivo = fopen(nombre_archivo, "a");
    if (p_archivo == NULL)
    {
        perror("Error al abrir el diario");
        return ERROR;
    }
    // 2. Escribir la entrada
    if (fputs(entrada, p_archivo) == EOF)
    {
        perror("Error al escribir la entrada en el diario");
        fclose(p_archivo);
        return ERROR;
    }
    // 3. Escribir el salto de línea
    if (fputc('\n', p_archivo) == EOF)
    {
        perror("Error al escribir el salto de línea");
        fclose(p_archivo);
        return ERROR;
    }
    // 4. Cerrar el archivo
    if (fclose(p_archivo) != 0)
    {
        perror("Error al cerrar el diario");
        return ERROR;
    }
    return EXITO;
}
int main(void)
{
    const char *MI_DIARIO = "diario.txt";
    int resultado = 0;
    printf("Escribiendo primera entrada...\n");
    resultado = agregar_entrada_diario(MI_DIARIO, "Hoy fue un día soleado.");
    if (resultado == ERROR)
    {
        fprintf(stderr, "No se pudo escribir la primera entrada.\n");
        return EXIT_FAILURE;
    }
    printf("Escribiendo segunda entrada...\n");
    resultado = agregar_entrada_diario(MI_DIARIO, "Aprendí a manejar archivos en
    C.");
    if (resultado == ERROR)
    {
        fprintf(stderr, "No se pudo escribir la segunda entrada.\n");
        return EXIT_FAILURE;
    }
    printf("Entradas agregadas al diario '%s' con éxito.\n", MI_DIARIO);
    return EXIT_SUCCESS;
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} ejercicio_archivos_1 -->
