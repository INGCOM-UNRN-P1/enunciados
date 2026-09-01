enum estado_transaccion
{
    TX_INICIADA,
    TX_ACTIVA,
    TX_PREPARADA,
    TX_COMPROMETIDA,
    TX_ABORTADA
};
enum tipo_aislamiento
{
    AISLAMIENTO_READ_UNCOMMITTED,
    AISLAMIENTO_READ_COMMITTED,
    AISLAMIENTO_REPEATABLE_READ,
    AISLAMIENTO_SERIALIZABLE
};
typedef struct
{
    unsigned long id;
    enum estado_transaccion estado;
    enum tipo_aislamiento aislamiento;
    int num_operaciones;
} transaccion_t;


int proc_tados_de_transaccion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}