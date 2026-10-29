enum estado_proceso
{
    PROCESO_NUEVO,
    PROCESO_LISTO,
    PROCESO_EJECUTANDO,
    PROCESO_BLOQUEADO,
    PROCESO_TERMINADO
};
enum razon_bloqueo
{
    BLOQ_IO,
    BLOQ_MUTEX,
    BLOQ_SEMAFORO,
    BLOQ_MENSAJE
};
typedef struct
{
    int pid;
    enum estado_proceso estado;
    enum razon_bloqueo razon; // Solo válido si estado == BLOQUEADO
    int prioridad;
} proceso_t;


int proc_38_modelo_de_estados(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}