# Simulación de Fusión de Cuentas de Usuario Duplicadas

## 1. Consigna
Implementar y gestionar la estructura de datos **Disjoint Set Union (DSU / Union-Find)** para resolver la operación: **Simulación de Fusión de Cuentas de Usuario Duplicadas**.
La estructura debe mantener una colección de conjuntos disjuntos identificados por representantes canónicos, optimizando las consultas y fusiones mediante compresión de caminos y unión por rango/tamaño para garantizar una complejidad temporal casi lineal $O(\alpha(N))$.

## 2. Firmas y Prototipos Requeridos
- `int ejecutar_dsu_union_25(int val)`: Procesa el flujo principal de Simulación de Fusión de Cuentas de Usuario Duplicadas

## 3. Requisitos y Consideraciones
- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 35 minutos (Nivel Bloom 4).
