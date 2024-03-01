#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "libs/data_structures/vector/vector.h"

int main() {
    vector v = createVector(7);
    int data[] = {1, 3, 5, 7, 8, 12};
    v.data = data;
    v.size = 4;

    printf("%zu %zu\n", v.size, v.capacity);
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");

    reserve(&v, 5);
    printf("%zu %zu\n", v.size, v.capacity);
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");

    clear(&v);
    printf("%zu %zu\n", v.size, v.capacity);
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");

    v.data = data;
    v.size = 4;

    shrinkToFit(&v);
    printf("%zu %zu\n", v.size, v.capacity);
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");

    deleteVector(&v);
    printf("%zu %zu\n", v.size, v.capacity);
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }

    return 0;
}

