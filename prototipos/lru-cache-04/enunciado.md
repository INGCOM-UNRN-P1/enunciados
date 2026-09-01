# Operación Put con Inserción y Desalojo del Menos Usado

## 1. Consigna
Implementar el esquema de almacenamiento en memoria caché con política **LRU (Least Recently Used)** para: **Operación Put con Inserción y Desalojo del Menos Usado**.
La caché debe gestionar un número acotado de entradas, desalojando automáticamente el elemento menos recientemente consultado cuando se alcanza la capacidad máxima y optimizando el tiempo de acceso.

## 2. Firmas y Prototipos Requeridos
- `int ejecutar_lru_cache_04(int val)`: Procesa el flujo principal de Operación Put con Inserción y Desalojo del Menos Usado

## 3. Requisitos y Consideraciones
- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 10 minutos (Nivel Bloom 1).
