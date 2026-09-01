enum tipo_evento
{
    EVENTO_CLICK,
    EVENTO_DOBLE_CLICK,
    EVENTO_PRESIONAR_TECLA,
    EVENTO_SOLTAR_TECLA,
    EVENTO_MOVER_MOUSE,
    EVENTO_SCROLL
};
enum boton_mouse
{
    BOTON_IZQUIERDO = 1,
    BOTON_DERECHO = 2,
    BOTON_MEDIO = 4
};
typedef struct
{
    enum tipo_evento tipo;
    int x, y;             // Coordenadas
    unsigned int botones; // Flags de botones presionados
    unsigned int tecla;
} evento_t;


int proc_pos_de_eventos_de_ui(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}