#include "wallet.h"
#include "math_utils.h"

int deposit(int balance, int amount) {
    if (amount <= 0) return balance;
    return add(balance, amount);
}

int withdraw(int balance, int amount) {
    if (amount <= 0 || amount > balance) return -1; // Error: insufficient funds
    return sub(balance, amount);
}