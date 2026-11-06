# Métodos y códigos HTTP

Implementá la siguiente interfaz declarada en `ej-20-40-metodos-y-codigos-http.h`:

```c
enum metodo_http { HTTP_GET, HTTP_POST, HTTP_PUT, HTTP_DELETE, HTTP_PATCH, HTTP_HEAD, HTTP_OPTIONS };
enum codigo_http { HTTP_200_OK=200, HTTP_201_CREATED=201, HTTP_204_NO_CONTENT=204, HTTP_301_MOVED=301, HTTP_302_FOUND=302, HTTP_400_BAD_REQUEST=400, HTTP_401_UNAUTHORIZED=401, HTTP_403_FORBIDDEN=403, HTTP_404_NOT_FOUND=404, HTTP_500_INTERNAL_ERROR=500, HTTP_503_UNAVAILABLE=503 };
const char *metodo_a_string(enum metodo_http metodo);
const char *codigo_a_mensaje(enum codigo_http codigo);
```

El método se convierte a su token HTTP en mayúsculas. El código se convierte a la frase en inglés: `OK`, `Created`, `No Content`, `Moved Permanently`, `Found`, `Bad Request`, `Unauthorized`, `Forbidden`, `Not Found`, `Internal Server Error` o `Service Unavailable`. Entradas no listadas devuelven `desconocido`.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
