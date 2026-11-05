#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-17-filtrado-de-logs.h"

bool debe_registrar(enum nivel_log m, enum nivel_log min) { return m >= LOG_DEBUG && m <= LOG_ERROR && min >= LOG_DEBUG && min <= LOG_ERROR && m >= min; }
