#include <stdio.h>
#include <assert.h>
#include "../src/math_utils.h"
#include "../src/wallet.h"
#include "../src/PR1.h"
void test_math_utils(void) {
    assert(add(2, 3) == 5);
    assert(sub(10, 4) == 6);
    assert(mul(3, 4) == 12);
    printf("[PASS] test_math_utils\n");
}

void test_wallet(void) {
    assert(deposit(100, 50) == 150);
    assert(withdraw(100, 40) == 60);
    assert(withdraw(100, 200) == -1); // Insufficient funds
    printf("[PASS] test_wallet\n");
}
void test_PR1(void)
{
    PR1message("anas") ;
    PR1message("123") ;
    assert(messagesize("anas") == 4);
    printmessgeAndNumber("anas amellahe");
    printf("[PASS] test_PR1\n");
}

int main(void) {
    test_math_utils();
    test_wallet();
    test_PR1();
    return 0;
}