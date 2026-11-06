#include <stdio.h>
#include "ej-20-34-permisos-de-archivo-unix.h"
bool tiene_permiso_unix(unsigned int p, enum permiso_unix x) { unsigned int b=(unsigned int)x; return b && !(b & ~0777u) && (p&b)==b; }
unsigned int agregar_permiso_unix(unsigned int p, enum permiso_unix x) { unsigned int b=(unsigned int)x; return (b && !(b&~0777u)) ? ((p|b)&0777u) : (p&0777u); }
void mostrar_permisos_unix(unsigned int p) { const unsigned int b[]={0400,0200,0100,0040,0020,0010,0004,0002,0001}; const char c[]="rwxrwxrwx"; p&=0777u; for(int i=0;i<9;i++) putchar((p&b[i])?c[i]:'-'); putchar('\n'); }
