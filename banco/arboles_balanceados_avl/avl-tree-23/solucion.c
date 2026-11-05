#include "avl-tree-23.h"
#include <stdint.h>
#include <stdlib.h>

int avl_heap_child_index(size_t parent, int right_child, size_t *child) {
  size_t offset = right_child ? 2u : 1u;
  if (child == NULL || (right_child != 0 && right_child != 1) ||
      parent > (SIZE_MAX - offset) / 2u) {
    return 0;
  }
  *child = parent * 2u + offset;
  return 1;
}

static int subtree_size(const avl_node_t *node, size_t *result) {
  if (node == NULL) {
    *result = 0;
    return 1;
  }
  size_t left;
  size_t right;
  if (!subtree_size(node->left, &left) || !subtree_size(node->right, &right) ||
      right == SIZE_MAX || left > SIZE_MAX - right - 1u) {
    return 0;
  }
  *result = left + right + 1u;
  return 1;
}

static int serialize(const avl_node_t *root, int *values, size_t *indices,
                     size_t count) {
  if (count > SIZE_MAX / sizeof(const avl_node_t *) ||
      count > SIZE_MAX / sizeof(size_t)) {
    return 0;
  }
  const avl_node_t **queue = malloc(count * sizeof(*queue));
  size_t *queue_indices = malloc(count * sizeof(*queue_indices));
  if (queue == NULL || queue_indices == NULL) {
    free(queue);
    free(queue_indices);
    return 0;
  }

  size_t head = 0;
  size_t tail = 0;
  queue[tail] = root;
  queue_indices[tail++] = 0;
  while (head < tail) {
    const avl_node_t *node = queue[head];
    size_t index = queue_indices[head];
    values[head] = node->key;
    indices[head] = index;
    ++head;

    if (node->left != NULL) {
      size_t child_index;
      if (tail == count || !avl_heap_child_index(index, 0, &child_index)) {
        free(queue);
        free(queue_indices);
        return 0;
      }
      queue[tail] = node->left;
      queue_indices[tail++] = child_index;
    }
    if (node->right != NULL) {
      size_t child_index;
      if (tail == count || !avl_heap_child_index(index, 1, &child_index)) {
        free(queue);
        free(queue_indices);
        return 0;
      }
      queue[tail] = node->right;
      queue_indices[tail++] = child_index;
    }
  }
  free(queue);
  free(queue_indices);
  return head == count;
}
int avl_index_build(const avl_node_t *root, avl_index_t *index) {
  if (index == NULL) {
    return 0;
  }
  index->values = NULL;
  index->indices = NULL;
  index->count = 0;

  size_t count;
  if (!subtree_size(root, &count)) {
    return 0;
  }
  if (count == 0) {
    return 1;
  }
  if (count > SIZE_MAX / sizeof(*index->values) ||
      count > SIZE_MAX / sizeof(*index->indices)) {
    return 0;
  }
  index->values = malloc(count * sizeof(*index->values));
  index->indices = malloc(count * sizeof(*index->indices));
  if (index->values == NULL || index->indices == NULL ||
      !serialize(root, index->values, index->indices, count)) {
    avl_index_destroy(index);
    return 0;
  }
  index->count = count;
  return 1;
}
void avl_index_destroy(avl_index_t *index) {
  if (index != NULL) {
    free(index->values);
    free(index->indices);
    index->values = NULL;
    index->indices = NULL;
    index->count = 0;
  }
}
