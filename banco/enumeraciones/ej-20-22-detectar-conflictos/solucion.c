#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-22-detectar-conflictos.h"

bool opciones_compatibles(unsigned int o){unsigned known=OPT_OPTIMIZAR|OPT_DEBUG|OPT_WARNINGS|OPT_WARNINGS_EXTRA|OPT_PEDANTIC;return !(o&~known)&&!((o&OPT_OPTIMIZAR)&&(o&OPT_DEBUG));}
