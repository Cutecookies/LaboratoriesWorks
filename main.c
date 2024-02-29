#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "libs/data_structures/vector/vector.h"

// Вектор пустой
void test_pushBack_emptyVector() {
    vector v = createVector(0);
    int x = 5;
    pushBack(&v, x);

    assert(v.size = 1);
    assert(v.data[0] = x);
}

// Вектор заполнен
void test_pushBack_fullVector();

void test() {
    test_pushBack_emptyVector();
}

int main() {
    test();

    return 0;
}

