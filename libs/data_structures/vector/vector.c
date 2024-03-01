# include "stdlib.h"
# include "vector.h"
#include <stdio.h>

vector createVector(size_t n) {
    if (n == 0) {
        int *vector_data = {};
        return (vector) {vector_data, n, n};
    }
    int *vector_data = (int *) malloc(n * sizeof(int *));
    if (!vector_data) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }

    return (vector) {vector_data, n, n};
}

void reserve(vector *v, size_t newCapacity) {
    int *new_data = (int *) realloc(v->data,
                                    newCapacity * sizeof(int *));
    if (!new_data) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }

    if (newCapacity < v->size)
        v->size = newCapacity;

    v->capacity = newCapacity;
}

void clear(vector *v) {
    v->size = 0;
}

void shrinkToFit(vector *v) {
    reserve(v, v->size);
}

void deleteVector(vector *v) {
    free(v->data);
    v->size = 0;
    v->capacity = 0;
}
