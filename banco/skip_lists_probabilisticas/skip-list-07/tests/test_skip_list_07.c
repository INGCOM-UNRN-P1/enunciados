#include "skip-list-07.h"
#include <assert.h>
#include <stdio.h>
static void fill(skip_list_t *l) { skip_list_init(l, 123u); assert(l->head); assert(skip_list_insert_height(l, 10, 1)); assert(skip_list_insert_height(l, 20, 2)); assert(skip_list_insert_height(l, 30, 3)); }
int main(void){skip_list_t l;fill(&l);skip_search_stats_t a=skip_list_07_search_stats(&l,20),b=skip_list_07_search_stats(&l,21);assert(a.found&&a.comparisons>0);assert(!b.found&&b.comparisons>0);assert(a.forward_hops<=b.forward_hops+1);skip_list_destroy(&l);puts("ok");}
