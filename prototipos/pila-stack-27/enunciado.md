# Pila Concurrente con Bloqueos Mutex

## 1. Consigna
Implementar el **TAD Pila (Stack)** para resolver: **Pila Concurrente con Bloqueos Mutex**.
La solución debe operar bajo política LIFO (Last-In, First-Out), permitiendo apilar (`push`), desapilar (`pop`) y consultar el elemento en el tope (`top`), manteniendo los invariantes estructurales y verificando estados vacíos o límites de memoria.

## 2. Firmas y Prototipos Requeridos
- `int ejecutar_pila_stack_27(int val)`: Procesa el flujo principal de Pila Concurrente con Bloqueos Mutex

## 3. Requisitos y Consideraciones
- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 45 minutos (Nivel Bloom 5).
