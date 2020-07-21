#include "problems.h"

int problem2() {
    int fibSum = 2, fib = 0, i = 2, *arr = new int();

    arr[0] = 1;
    arr[1] = 2;

    while (fib < 4000000) {
        fib = arr[i - 1] + arr[i - 2];

        if (fib % 2 == 0) {
            fibSum += fib;
        }

        arr[i] = fib;

        i++;
    }

    delete arr;

    return fibSum;
}
