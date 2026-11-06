#include "ej-20-55-motor-de-fsm.h"
#include <stddef.h>

static bool estado_valido(estado_fsm_e estado)
{
    return estado >= FSM_ESTADO_0 && estado < FSM_ESTADO_MAX;
}

static bool evento_valido(evento_fsm_e evento)
{
    return evento >= FSM_EVENTO_0 && evento < FSM_EVENTO_MAX;
}

void fsm_inicializar(maquina_estados_t *fsm, estado_fsm_e inicial)
{
    if (fsm == NULL)
    {
        return;
    }

    fsm->estado_actual = estado_valido(inicial) ? inicial : FSM_ESTADO_MAX;
    fsm->num_transiciones = 0;
    fsm->contexto = NULL;
}

bool fsm_agregar_transicion(maquina_estados_t *fsm, transicion_t trans)
{
    if (fsm == NULL || !estado_valido(fsm->estado_actual) ||
        fsm->num_transiciones < 0 || fsm->num_transiciones > MAX_TRANSICIONES ||
        !estado_valido(trans.desde) || !estado_valido(trans.hasta) ||
        !evento_valido(trans.evento) || fsm->num_transiciones == MAX_TRANSICIONES)
    {
        return false;
    }

    for (int i = 0; i < fsm->num_transiciones; i++)
    {
        if (fsm->transiciones[i].desde == trans.desde &&
            fsm->transiciones[i].evento == trans.evento)
        {
            return false;
        }
    }

    fsm->transiciones[fsm->num_transiciones] = trans;
    fsm->num_transiciones++;
    return true;
}

bool fsm_procesar_evento(maquina_estados_t *fsm, evento_fsm_e evento)
{
    if (fsm == NULL || !estado_valido(fsm->estado_actual) ||
        !evento_valido(evento) || fsm->num_transiciones < 0 ||
        fsm->num_transiciones > MAX_TRANSICIONES)
    {
        return false;
    }

    for (int i = 0; i < fsm->num_transiciones; i++)
    {
        transicion_t *trans = &fsm->transiciones[i];
        if (trans->desde == fsm->estado_actual && trans->evento == evento)
        {
            if (!estado_valido(trans->hasta))
            {
                return false;
            }
            if (trans->accion != NULL)
            {
                trans->accion(fsm->contexto);
            }
            fsm->estado_actual = trans->hasta;
            return true;
        }
    }

    return false;
}

estado_fsm_e fsm_estado_actual(const maquina_estados_t *fsm)
{
    if (fsm == NULL || !estado_valido(fsm->estado_actual))
    {
        return FSM_ESTADO_MAX;
    }
    return fsm->estado_actual;
}

/* Callback pequeño reutilizable para demostrar la interfaz basada en contexto. */
void fsm_incrementar_contexto(void *contexto)
{
    if (contexto != NULL)
    {
        (*(int *)contexto)++;
    }
}
