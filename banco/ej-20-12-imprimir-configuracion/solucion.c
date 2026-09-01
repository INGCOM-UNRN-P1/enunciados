enum codigo_error
{
    ERROR_NINGUNO = 0,
    ERROR_MEMORIA,
    ERROR_ARCHIVO_NO_ENCONTRADO,
    ERROR_PERMISO_DENEGADO,
    ERROR_ARGUMENTO_INVALIDO,
    ERROR_TIMEOUT,
    ERROR_CONEXION,
    ERROR_DESCONOCIDO
};


int proc_primir_configuracion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}