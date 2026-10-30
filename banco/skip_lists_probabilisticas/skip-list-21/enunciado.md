# Skip List Lock-Free con Punteros Marcados Atómicos

## 1. Consigna
Diseñar e implementar las operaciones sobre **Listas por Saltos (Skip Lists)** para: **Skip List Lock-Free con Punteros Marcados Atómicos**.
La estructura debe enlazar nodos con arreglos de punteros de altura variable generados probabilísticamente con distribución geométrica, permitiendo búsquedas, inserciones y eliminaciones ordenadas en tiempo esperado $O(\log N)$ mediante avances multinivel.

## 2. Firmas y Prototipos Requeridos
- `int ejecutar_skip_list_21(int val)`: Procesa el flujo principal de Skip List Lock-Free con Punteros Marcados Atómicos

## 3. Requisitos y Consideraciones
- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 35 minutos (Nivel Bloom 4).
