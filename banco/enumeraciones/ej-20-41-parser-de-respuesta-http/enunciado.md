# Parser de respuesta HTTP

Implementá la siguiente interfaz declarada en `ej-20-41-parser-de-respuesta-http.h`:

```c
enum metodo_http { HTTP_GET, HTTP_POST, HTTP_PUT, HTTP_DELETE, HTTP_PATCH, HTTP_HEAD, HTTP_OPTIONS };
enum codigo_http { HTTP_200_OK=200, HTTP_201_CREATED=201, HTTP_204_NO_CONTENT=204, HTTP_301_MOVED=301, HTTP_302_FOUND=302, HTTP_400_BAD_REQUEST=400, HTTP_401_UNAUTHORIZED=401, HTTP_403_FORBIDDEN=403, HTTP_404_NOT_FOUND=404, HTTP_500_INTERNAL_ERROR=500, HTTP_503_UNAVAILABLE=503 };

const char *metodo_a_string(enum metodo_http metodo);
const char *codigo_a_mensaje(enum codigo_http codigo);
bool es_codigo_exito(enum codigo_http codigo);
bool es_codigo_error_cliente(enum codigo_http codigo);
bool es_codigo_error_servidor(enum codigo_http codigo);
```

El encabezado define ambos enums de manera autocontenida. Las dos conversiones siguen la tabla de ej-20-40 y devuelven `desconocido` ante valor no listado. Las tres clasificaciones reconocen rangos HTTP completos 200–299, 400–499 y 500–599, aun cuando el código no tenga constante nombrada; fuera del rango devuelven false.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
