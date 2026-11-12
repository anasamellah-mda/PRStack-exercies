#include <stdio.h>
#include <assert.h>
#include "../src/math_utils.h"

void test_math_utils(void) {
    assert(add(2, 3) == 5);
    assert(sub(10, 4) == 6);
    printf("[PASS] test_math_utils\n");
}

int main(void) {
    test_math_utils();
    return 0;
}