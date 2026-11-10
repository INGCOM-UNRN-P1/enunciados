#ifndef SKIP_LIST_07_H
#define SKIP_LIST_07_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#define SKIP_LIST_MAX_LEVEL 16u
typedef struct skip_node { int value; size_t height; struct skip_node *next[SKIP_LIST_MAX_LEVEL]; } skip_node_t;
typedef struct { skip_node_t *head; skip_node_t *tail; size_t length; size_t level; uint32_t rng_state; } skip_list_t;
typedef struct { bool found; size_t comparisons; size_t forward_hops; } skip_search_stats_t;
typedef struct { size_t maximum; double average; size_t count; } skip_height_stats_t;
void skip_list_init(skip_list_t *list, uint32_t seed);
void skip_list_destroy(skip_list_t *list);
bool skip_list_insert(skip_list_t *list, int value);
bool skip_list_insert_height(skip_list_t *list, int value, size_t height);
bool skip_list_contains(const skip_list_t *list, int value);
bool skip_list_remove(skip_list_t *list, int value);
size_t skip_list_size(const skip_list_t *list);
skip_search_stats_t skip_list_07_search_stats(const skip_list_t *list, int value);
#endif
