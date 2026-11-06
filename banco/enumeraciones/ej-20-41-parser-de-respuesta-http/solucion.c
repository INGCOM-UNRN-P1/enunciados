#include "ej-20-41-parser-de-respuesta-http.h"
const char *metodo_a_string(enum metodo_http m) { static const char *v[]={"GET","POST","PUT","DELETE","PATCH","HEAD","OPTIONS"};return m>=HTTP_GET&&m<=HTTP_OPTIONS?v[m]:"desconocido"; }
const char *codigo_a_mensaje(enum codigo_http c) { switch(c){case HTTP_200_OK:return "OK";case HTTP_201_CREATED:return "Created";case HTTP_204_NO_CONTENT:return "No Content";case HTTP_301_MOVED:return "Moved Permanently";case HTTP_302_FOUND:return "Found";case HTTP_400_BAD_REQUEST:return "Bad Request";case HTTP_401_UNAUTHORIZED:return "Unauthorized";case HTTP_403_FORBIDDEN:return "Forbidden";case HTTP_404_NOT_FOUND:return "Not Found";case HTTP_500_INTERNAL_ERROR:return "Internal Server Error";case HTTP_503_UNAVAILABLE:return "Service Unavailable";default:return "desconocido";} }
bool es_codigo_exito(enum codigo_http c){return c>=200&&c<300;}
bool es_codigo_error_cliente(enum codigo_http c){return c>=400&&c<500;}
bool es_codigo_error_servidor(enum codigo_http c){return c>=500&&c<600;}
