### Ejercicio 13.3 - b.2 - Contador de líneas ⭐⭐⭐☆☆

:::{exercise}
:label: ejercicio_archivos_2
:enumerator: 2

**Contador de líneas**

Escribí una función que reciba el nombre de un archivo, lo lea y devuelva la
cantidad de líneas que contiene. Una línea se define como una secuencia de
caracteres terminada por un `\n`. La función debe devolver un número negativo en
caso de error.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {exercise} -->

::::{solution} ejercicio_archivos_2
:class: dropdown

:::{code-block}c
:linenos:
#include <stdio.h>
#include <stdlib.h>
#define MAX_LONGITUD_LINEA 1024
#define ERROR_APERTURA -1
#define ERROR_LECTURA -2
/**
 * Cuenta el número de líneas en un archivo de texto.
 *
 * @param nombre_archivo La ruta del archivo a leer.
 *      #PRE: No puede ser NULL.
 *
 * @returns El número de líneas contadas si la operación es exitosa.
 *          Retorna ERROR_APERTURA si el archivo no puede abrirse.
 *          Retorna ERROR_LECTURA si ocurre un error durante la lectura.
 *
 * @post El archivo no es modificado.
 */
int contar_lineas(const char *nombre_archivo)
{
    int cantidad_lineas = 0;
    FILE *p_archivo = NULL;
    char buffer[MAX_LONGITUD_LINEA];
    p_archivo = fopen(nombre_archivo, "r");
    if (p_archivo == NULL)
    {
        perror("Error al abrir el archivo para contar líneas");
        return ERROR_APERTURA;
    }
    while (fgets(buffer, sizeof(buffer), p_archivo) != NULL)
    {
        cantidad_lineas++;
    }
    // Después del lazo, verificar si salimos por error o por fin de archivo
    if (ferror(p_archivo))
    {
        perror("Error de lectura mientras se contaban las líneas");
        cantidad_lineas = ERROR_LECTURA; // Sobrescribimos el conteo con un
        código de error
    }
    if (fclose(p_archivo) != 0)
    {
        perror("Error al cerrar el archivo después de contar");
        if (cantidad_lineas >= 0) // No sobrescribir un error de lectura previo
        {
            cantidad_lineas = ERROR_APERTURA; // Reutilizamos código de error
        }
    }
    return cantidad_lineas;
}
int main(void)
{
    const char *NOMBRE_ARCHIVO = "diario.txt";
    // Crear un archivo de prueba primero
    FILE *p_archivo_prueba = fopen(NOMBRE_ARCHIVO, "w");
    if (p_archivo_prueba != NULL)
    {
        fputs("Primera línea.\n", p_archivo_prueba);
        fputs("Segunda línea.\n", p_archivo_prueba);
        fputs("Tercera línea.\n", p_archivo_prueba);
        fclose(p_archivo_prueba);
    }
    printf("Contando líneas en el archivo '%s'...\n", NOMBRE_ARCHIVO);
    int lineas = contar_lineas(NOMBRE_ARCHIVO);
    if (lineas >= 0)
    {
        printf("El archivo contiene %d líneas.\n", lineas);
    }
    else
    {
        fprintf(stderr, "Ocurrió un error al procesar el archivo (código:
                            % d)
            .\n ", lineas);
            return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} ejercicio_archivos_2 -->
