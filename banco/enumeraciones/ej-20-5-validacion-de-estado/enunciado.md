Implementar una función que valide si un valor numérico corresponde a un estado válido de la enumeración. Usar el patrón del valor centinela.

```c
enum estado_red { DESCONECTADO, CONECTANDO, CONECTADO, DESCONECTANDO, ERROR_TIMEOUT, ERROR_AUTH, _ESTADO_MAX };
bool estado_valido(int valor);
```

`_ESTADO_MAX` es un centinela y no representa un estado válido.
