# Estadísticas por protocolo

Implementá la siguiente interfaz declarada en `ej-20-33-estadisticas-por-protocolo.h`:

```c
typedef enum { PROTOCOLO_TCP, PROTOCOLO_UDP, PROTOCOLO_ICMP, PROTOCOLO_OTRO } protocolo_t;
typedef struct { protocolo_t protocolo; } paquete_red_t;
typedef struct { unsigned int tcp, udp, icmp, otro; } estadisticas_protocolo_t;
estadisticas_protocolo_t contar_por_protocolo(const paquete_red_t *paquetes, size_t cantidad);
```

Contá cada elemento según `protocolo`; cualquier valor de protocolo desconocido cuenta como `otro`. Si `paquetes` es NULL o `cantidad` es cero, devolvé todas las cuentas en cero.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
