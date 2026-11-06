#ifndef EJERCICIO_HEAP_PRIO_30_H
#define EJERCICIO_HEAP_PRIO_30_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef int (*heap_compare_fn)(const void*,const void*);typedef struct {unsigned char *data;size_t n,cap,width;heap_compare_fn cmp;} generic_heap_t;
int generic_int_compare(const void*a,const void*b);bool generic_heap_init(generic_heap_t*h,size_t width,heap_compare_fn cmp);bool generic_heap_push(generic_heap_t*h,const void*item);bool generic_heap_peek(const generic_heap_t*h,void*out);bool generic_heap_pop(generic_heap_t*h,void*out);void generic_heap_destroy(generic_heap_t*h);
#endif
