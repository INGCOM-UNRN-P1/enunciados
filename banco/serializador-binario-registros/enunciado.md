# Persistencia Binaria con Magic Number y Checksum de Integridad

## 1. Consigna
Implementar un módulo de serialización y deserialización binaria en memoria con validación de cabecera mágica y suma de verificación (*Checksum*).

Estructura del formato de archivo/búfer:
- **Cabecera (12 bytes):**
  - `magic` (4 bytes): `0x42494E31` ("BIN1")
  - `version` (4 bytes): `1`
  - `checksum` (4 bytes): XOR acumulado de todos los datos de registros.
- **Payload:** $N$ registros de tipo `Producto` (`id`: uint32, `precio`: float, `stock`: uint32).

Comandos interactivos:
- `CREATE <N>`: Crea $N$ registros en memoria.
- `SAVE`: Serializa al búfer interno y muestra `SAVED bytes=<total> checksum=0x<hex>`.
- `LOAD`: Deserializa validando magic, version y checksum. Imprime `OK` o `ERROR_INTEGRIDAD`.
- `CORRUPT <byte_pos>`: Modifica un byte arbitrario del búfer serializado para simular corrupción física.
- `SHOW`: Muestra los productos cargados.
- `EXIT`: Termina.
