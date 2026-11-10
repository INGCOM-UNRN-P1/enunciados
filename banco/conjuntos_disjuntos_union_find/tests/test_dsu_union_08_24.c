#include <assert.h>
#include <stddef.h>
#include "../dsu-union-08/dsu-union-08.h"
#include "../dsu-union-09/dsu-union-09.h"
#include "../dsu-union-11/dsu-union-11.h"
#include "../dsu-union-12/dsu-union-12.h"
#include "../dsu-union-13/dsu-union-13.h"
#include "../dsu-union-14/dsu-union-14.h"
#include "../dsu-union-15/dsu-union-15.h"
#include "../dsu-union-16/dsu-union-16.h"
#include "../dsu-union-17/dsu-union-17.h"
#include "../dsu-union-18/dsu-union-18.h"
#include "../dsu-union-19/dsu-union-19.h"
#include "../dsu-union-20/dsu-union-20.h"
#include "../dsu-union-21/dsu-union-21.h"
#include "../dsu-union-22/dsu-union-22.h"
#include "../dsu-union-23/dsu-union-23.h"
#include "../dsu-union-24/dsu-union-24.h"

int main(void)
{
    const int edges[][2] = {{0,1},{1,2},{3,4}};
    assert(dsu08_tamano_componente(5, edges, 3, 1) == 3);
    assert(dsu08_tamano_componente(5, edges, 3, 4) == 2);
    assert(dsu08_tamano_componente(0, NULL, 0, 0) == -1);
    const int cycle[][2] = {{0,1},{1,2},{2,0}};
    assert(dsu09_tiene_ciclo(3, cycle, 3) == 1);
    assert(dsu09_tiene_ciclo(3, edges, 2) == 0);
    const int cycle_then_bad[][2] = {{0,1},{1,2},{2,0},{0,3}};
    assert(dsu09_tiene_ciclo(3, cycle_then_bad, 4) == -1);

    const int dynamic[][3] = {{0,0,1},{1,0,2},{0,1,2},{1,0,2}};
    int answers[6];
    assert(dsu11_procesar(3, dynamic, 4, answers) == 4);
    assert(answers[0] == 0 && answers[1] == 0 && answers[2] == 0 && answers[3] == 1);
    const int rollback[][3] = {{0,0,1},{1,0,0},{0,1,2},{3,0,2},{2,0,0},{3,0,2}};
    assert(dsu12_procesar(3, rollback, 6, answers) == 6);
    assert(answers[3] == 1 && answers[5] == 0);

    const int constraints[][3] = {{0,1,4},{1,2,3}};
    int potentials[3];
    assert(dsu13_resolver(3, constraints, 2, potentials) == 1);
    assert(potentials[1] - potentials[0] == 4);
    assert(potentials[2] - potentials[1] == 3);
    const int contradiction[][3] = {{0,1,4},{1,2,3},{0,2,8}};
    assert(dsu13_resolver(3, contradiction, 3, potentials) == 0);
    const int contradiction_then_bad[][3] = {{0,1,4},{1,2,3},{0,2,8},{0,3,1}};
    assert(dsu13_resolver(3, contradiction_then_bad, 4, potentials) == -1);
    assert(dsu14_es_bipartito(3, cycle, 3) == 0);
    assert(dsu14_es_bipartito(3, edges, 2) == 1);
    const int odd_cycle_then_bad[][2] = {{0,1},{1,2},{2,0},{0,3}};
    assert(dsu14_es_bipartito(3, odd_cycle_then_bad, 4) == -1);

    const size_t openings[][2] = {{0,0},{1,0},{1,1}};
    assert(dsu15_primer_cruce(2, 2, openings, 3) == 2);
    const size_t repeated_openings[][2] = {{0,0},{0,0},{1,0}};
    assert(dsu15_primer_cruce(2, 2, repeated_openings, 3) == 2);
    const size_t invalid_openings[][2] = {{0,0},{1,0}};
    assert(dsu15_primer_cruce(1, 1, invalid_openings, 2) == -1);
    const int grid[3][100] = {{1,0,1},{1,0,0},{0,1,1}};
    assert(dsu16_contar_islas(3, 3, grid) == 3);
    const int pixels[] = {0,2,10};
    assert(dsu17_contar_regiones(1, 3, pixels, 2) == 2);

    const char *names[] = {"Ana","Beto","Caro"};
    const char *const pairs[][2] = {{"Ana","Caro"}};
    assert(dsu18_contar_grupos(names, 3, pairs, 1) == 2);
    const char *repeated[] = {"Ana","Beto","Ana"};
    const char *const pair2[][2] = {{"Ana","Beto"}};
    size_t indices[3]; int labels[3];
    assert(dsu19_mapear_y_agrupar(repeated, 3, pair2, 1, indices, labels) == 3);
    assert(indices[0] == indices[2]);
    assert(labels[0] == labels[1] && labels[1] == labels[2]);

    assert(dsu20_contar_puentes(3, edges, 2) == 2);
    const int parallel[][2] = {{0,1},{0,1}};
    assert(dsu20_contar_puentes(2, parallel, 2) == 0);
    int reps[5];
    assert(dsu21_representantes(5, edges, 2, reps) == 5);
    assert(reps[0] == reps[2] && reps[3] != reps[0]);

    const int versions[][4] = {{0,0,0,1},{1,1,0,1},{0,1,0,1}};
    assert(dsu22_procesar(2, versions, 3, answers) == 3);
    assert(answers[1] == 1 && answers[2] == 0);
    const int relations[][2] = {{0,1},{1,2}};
    const int queries[][2] = {{0,2},{0,3}};
    int eq[2];
    assert(dsu23_consultar(4, relations, 2, queries, 2, eq) == 2);
    assert(eq[0] == 1 && eq[1] == 0);

    const int weighted[][3] = {{0,1,2},{2,3,2},{1,2,5}};
    int threshold = -1;
    assert(dsu24_umbral(4, weighted, 3, 2, &threshold) == 0 && threshold == 2);
    assert(dsu24_umbral(4, weighted, 3, 1, &threshold) == 0 && threshold == 5);
    return 0;
}
