#include "skip-list-03.h"
#include <assert.h>
#include <stdio.h>
int main(void){skip_list_t l;skip_list_init(&l,1);assert(skip_list_03_insert_at_height(&l,5,4));assert(skip_list_03_insert_at_height(&l,1,1));assert(skip_list_03_insert_at_height(&l,9,2));assert(!skip_list_03_insert_at_height(&l,4,0));assert(!skip_list_03_insert_at_height(&l,4,SKIP_LIST_MAX_LEVEL+1));assert(!skip_list_03_insert_at_height(&l,5,2));assert(l.head->next[0]->value==1&&l.tail->value==9);skip_list_destroy(&l);puts("ok");}
