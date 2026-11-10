#include "skip-list-08.h"
#include <assert.h>
#include <stdio.h>
static void fill(skip_list_t *l) { skip_list_init(l, 123u); assert(l->head); assert(skip_list_insert_height(l, 10, 1)); assert(skip_list_insert_height(l, 20, 2)); assert(skip_list_insert_height(l, 30, 3)); }
int main(void){skip_list_t l;skip_list_init(&l,1);skip_height_stats_t a=skip_list_08_height_stats(&l);assert(a.count==0&&a.maximum==0&&a.average==0.0);fill(&l);a=skip_list_08_height_stats(&l);assert(a.count==3&&a.maximum==3&&a.average==2.0);skip_list_destroy(&l);puts("ok");}
