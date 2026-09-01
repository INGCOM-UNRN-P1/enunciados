enum opcion_menu
{
    MENU_NUEVO = 1,
    MENU_ABRIR,
    MENU_GUARDAR,
    MENU_CERRAR,
    MENU_SALIR,
    MENU_INVALIDO = -1
};


int proc__detectar_conflictos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}