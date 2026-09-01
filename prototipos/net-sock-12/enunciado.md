# Cliente HTTP Mínimo: Envío de Solicitud GET y Parseo de Respuesta

## 1. Consigna
Implementar el protocolo y manejo de comunicaciones en red en C para: **Cliente HTTP Mínimo: Envío de Solicitud GET y Parseo de Respuesta**.
El programa debe gestionar correctamente la serialización de tramas binarias, conversión de orden de bytes de red y host (Endianness), validación de sumas de verificación (checksum) y control robusto de descriptores de sockets según los estándares POSIX/C11.

## 2. Firmas y Prototipos Requeridos
- `int ejecutar_net_sock_12(int val)`: Procesa el flujo principal de Cliente HTTP Mínimo: Envío de Solicitud GET y Parseo de Respuesta

## 3. Requisitos y Consideraciones
- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 15 minutos (Nivel Bloom 2).
