#include "problems.h"

int problem1() {
    int x = 0;

    for (int i = 0; i < 1000; i++) {
        if (i % 5 == 0 || i % 3 == 0) {
            x += i;
        }
    }

    return x;
}
