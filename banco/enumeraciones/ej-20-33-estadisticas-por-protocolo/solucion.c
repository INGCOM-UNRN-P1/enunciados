#include "ej-20-33-estadisticas-por-protocolo.h"
estadisticas_protocolo_t contar_por_protocolo(const paquete_red_t *p, size_t n) {
    estadisticas_protocolo_t r={0,0,0,0}; if (!p) return r;
    for(size_t i=0;i<n;i++) switch(p[i].protocolo) {
    case PROTOCOLO_TCP: r.tcp++; break; case PROTOCOLO_UDP: r.udp++; break;
    case PROTOCOLO_ICMP: r.icmp++; break; default: r.otro++; break; }
    return r;
}
