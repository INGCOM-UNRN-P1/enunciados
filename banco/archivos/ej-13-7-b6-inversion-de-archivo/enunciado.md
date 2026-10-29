### Ejercicio 13.7 - b.6 - Inversión de archivo ⭐⭐☆☆☆

:::{exercise}
:label: ejercicio_archivos_6
:enumerator: 6

**Inversión de archivo**

Implementá una función `int invertir_archivo(const char *origen, const char
*destino)` que reciba el nombre de un archivo de texto existente (`origen`) y
genere un nuevo archivo (`destino`) que contenga exactamente el mismo texto pero
invertido carácter por carácter (es decir, el último carácter del original será
el primero del nuevo, y así sucesivamente). La función debe usar `fseek` y
`ftell` para determinar el tamaño del archivo y leer los caracteres desde el
final hacia el principio. Debe retornar `0` en caso de éxito y un valor negativo
ante fallas de apertura, posicionamiento o escritura.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {exercise} -->

::::{solution} ejercicio_archivos_6
:class: dropdown

:::{code-block}c
:linenos:
#include <stdio.h>
#include <stdlib.h>
#define EXITO 0
#define ERROR_APERTURA -1
#define ERROR_POSICIONAMIENTO -2
#define ERROR_ESCRITURA -3
int invertir_archivo(const char *origen, const char *destino)
{
    FILE *p_origen = fopen(origen, "r");
    if (p_origen == NULL)
    {
        perror("Error al abrir el archivo de origen");
        return ERROR_APERTURA;
    }
    FILE *p_destino = fopen(destino, "w");
    if (p_destino == NULL)
    {
        perror("Error al abrir el archivo de destino");
        fclose(p_origen);
        return ERROR_APERTURA;
    }
    // Determinar el tamaño del archivo de origen usando fseek y ftell
    if (fseek(p_origen, 0L, SEEK_END) != 0)
    {
        perror("Error al posicionarse al final del archivo");
        fclose(p_origen);
        fclose(p_destino);
        return ERROR_POSICIONAMIENTO;
    }
    long tamanio = ftell(p_origen);
    if (tamanio == -1L)
    {
        perror("Error al obtener la posición actual (tamaño)");
        fclose(p_origen);
        fclose(p_destino);
        return ERROR_POSICIONAMIENTO;
    }
    // Leer carácter por carácter desde el final hacia el inicio
    for (long i = tamanio - 1; i >= 0; i--)
    {
        if (fseek(p_origen, i, SEEK_SET) != 0)
        {
            perror("Error de posicionamiento en el lazo");
            fclose(p_origen);
            fclose(p_destino);
            return ERROR_POSICIONAMIENTO;
        }
        int c = fgetc(p_origen);
        if (c == EOF)
        {
            perror("Error al leer carácter");
            fclose(p_origen);
            fclose(p_destino);
            return ERROR_POSICIONAMIENTO;
        }
        if (fputc(c, p_destino) == EOF)
        {
            perror("Error al escribir carácter en destino");
            fclose(p_origen);
            fclose(p_destino);
            return ERROR_ESCRITURA;
        }
    }
    fclose(p_origen);
    if (fclose(p_destino) != 0)
    {
        perror("Error al cerrar el archivo de destino");
        return ERROR_ESCRITURA;
    }
    return EXITO;
}
int main(void)
{
    const char *ORIGEN = "entrada.txt";
    const char *DESTINO = "salida_invertida.txt";
    // Crear un archivo de prueba
    FILE *f = fopen(ORIGEN, "w");
    if (f != NULL)
    {
        fputs("Ingenieria en Computacion UNRN", f);
        fclose(f);
    }
    printf("Invirtiendo archivo \x27%s\x27 en \x27%s\x27...\n", ORIGEN,
           DESTINO);
    if (invertir_archivo(ORIGEN, DESTINO) == EXITO)
    {
        printf("Archivo invertido exitosamente.\n");
    }
    else
    {
        printf("Ocurrió un error al invertir el archivo.\n");
    }
    return 0;
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} ejercicio_archivos_6 -->
