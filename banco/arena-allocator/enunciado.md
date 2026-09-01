# Asignador de Memoria por Bloques (Arena Allocator)

## 1. Consigna
Implementar un asignador de memoria por región o bloques continuos (*Arena Allocator*) en C.

Estructura requerida:
- Pre-reserva un búfer de tamaño fijo $B$.
- Soporta asignaciones consecutivas con alineación a 8 bytes.
- Soporta `RESET` (pone el contador de bytes usados en 0 sin liberar el bloque base).
- Reporta estadísticas de memoria usada y capacidad restante.

Comandos:
- `INIT <capacidad_bytes>`: Inicializa la arena con la capacidad solicitada.
- `ALLOC <bytes>`: Asigna un bloque de tamaño `<bytes>` con alineación a 8 bytes. Imprime `OK offset=<offset>` o `FALLO` si no hay espacio.
- `STATS`: Imprime `USADO: <usado> / RESTANTE: <restante>`.
- `RESET`: Reinicia el puntero de asignación a 0. Imprime `ARENA_RESETEADA`.
- `EXIT`: Destruye la arena y finaliza.
