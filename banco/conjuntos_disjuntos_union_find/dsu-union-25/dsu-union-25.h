#ifndef DSU_UNION_25_H
#define DSU_UNION_25_H
#include <stdbool.h>
#include <stddef.h>
typedef struct { const char *name; const char *const *emails; size_t email_count; } dsu_account_t;
/* Returns an allocated canonical group index per account; caller frees *groups. */
bool dsu_merge_accounts(const dsu_account_t *accounts, size_t count, size_t **groups);
#endif
