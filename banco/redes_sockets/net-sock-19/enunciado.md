# Servidor TFTP Simplificado: Transferencia de Archivos por Bloques

## 1. Consigna
Implementar el protocolo y manejo de comunicaciones en red en C para: **Servidor TFTP Simplificado: Transferencia de Archivos por Bloques**.
El programa debe gestionar correctamente la serialización de tramas binarias, conversión de orden de bytes de red y host (Endianness), validación de sumas de verificación (checksum) y control robusto de descriptores de sockets según los estándares POSIX/C11.

## 2. Firmas y Prototipos Requeridos
- `int ejecutar_net_sock_19(int val)`: Procesa el flujo principal de Servidor TFTP Simplificado: Transferencia de Archivos por Bloques

## 3. Requisitos y Consideraciones
- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 25 minutos (Nivel Bloom 3).
