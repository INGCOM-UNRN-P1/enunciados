enum evento_red
{
    EVENTO_CONECTAR,
    EVENTO_DESCONECTAR,
    EVENTO_TIMEOUT,
    EVENTO_ERROR
};
enum estado_red procesar_evento(enum estado_red estado,
                                enum evento_red evento);


int proc_4_maquina_de_estados(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}