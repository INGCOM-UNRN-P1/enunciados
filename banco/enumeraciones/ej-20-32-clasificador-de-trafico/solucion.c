#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-32-clasificador-de-trafico.h"

enum tipo_trafico clasificar_paquete(const paquete_red_t*p){if(!p)return TRAFICO_MALICIOSO;if(p->bytes_transferidos>=100000000u||p->proto<PROTOCOLO_TCP||p->proto>PROTOCOLO_OTRO||p->tipo==TRAFICO_MALICIOSO)return TRAFICO_MALICIOSO;if(p->tipo==TRAFICO_SOSPECHOSO)return TRAFICO_SOSPECHOSO;unsigned d=p->puerto_destino;if(d==80||d==443||d==22)return TRAFICO_NORMAL;if(d>1024)return TRAFICO_SOSPECHOSO;return TRAFICO_NORMAL;}
