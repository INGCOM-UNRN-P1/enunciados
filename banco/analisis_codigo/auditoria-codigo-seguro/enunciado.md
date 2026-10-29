# Auditoría y Refactorización de Código Seguro (CWE-120)

## 1. Consigna
Refactorizar un analizador de credenciales de usuario para eliminar vulnerabilidades de desbordamiento de búfer (*Buffer Overflow / CWE-120*).

El programa debe procesar credenciales de formato `USUARIO:ROL:TOKEN` asegurando:
1. Máxima longitud permitida para `USUARIO`: 31 caracteres (+ `\0`).
2. Máxima longitud permitida para `ROL`: 15 caracteres (+ `\0`).
3. Máxima longitud permitida para `TOKEN`: 63 caracteres (+ `\0`).
4. Si algún campo excede su límite o el formato está incompleto, debe rechazarlo con `RECHAZADO: OVERFLOW_PREVENTED`.
5. Si es válido, imprime `ACEPTADO user=<USUARIO> rol=<ROL>`.
