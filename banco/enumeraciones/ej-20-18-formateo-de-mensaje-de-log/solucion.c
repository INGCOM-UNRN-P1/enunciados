enum tipo_mensaje
{
    MSG_DATOS = 0,
    MSG_ACK = 1,
    MSG_NACK = 2,
    MSG_RESET = 3
};
typedef struct
{
    unsigned int tipo : 2;      // 2 bits para tipo (0-3)
    unsigned int prioridad : 2; // 2 bits para prioridad (0-3)
    unsigned int secuencia : 4; // 4 bits para número de secuencia (0-15)
} cabecera_mensaje_t;


int proc_eo_de_mensaje_de_log(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}