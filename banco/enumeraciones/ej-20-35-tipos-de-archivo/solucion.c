#include <string.h>
#include "ej-20-35-tipos-de-archivo.h"
const char *tipo_archivo_a_string(enum tipo_archivo t) { static const char *s[]={"regular","directorio","enlace_simbolico","enlace_duro","dispositivo","pipe","socket"}; return t>=TIPO_REGULAR&&t<=TIPO_SOCKET?s[t]:"desconocido"; }
bool archivo_info_valida(const archivo_info_t *a) { return a && a->nombre[0] && memchr(a->nombre,'\0',sizeof a->nombre) && a->tipo>=TIPO_REGULAR && a->tipo<=TIPO_SOCKET && !(a->permisos&~0777u); }
