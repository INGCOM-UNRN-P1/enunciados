enum estado_juego
{
    JUEGO_MENU,
    JUEGO_JUGANDO,
    JUEGO_PAUSADO,
    JUEGO_GAME_OVER,
    JUEGO_VICTORIA
};
enum dificultad
{
    DIFICULTAD_FACIL,
    DIFICULTAD_NORMAL,
    DIFICULTAD_DIFICIL,
    DIFICULTAD_EXPERTO
};
typedef struct
{
    enum estado_juego estado;
    enum dificultad dificultad;
    unsigned int puntuacion;
    unsigned int nivel;
    unsigned int vidas;
} juego_t;


int proc_de_conversion_generi(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}