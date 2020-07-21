#include "problems.h"
#include <cmath>

using namespace std;


bool isEven(double long sq) {
    return sq - ceil(sq) == 0;
}

/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
long problem3() {
    long n = 600851475143;
    long largestPrimeNumber = 0;

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, divide n
        while (n % i == 0) {
            n = n / i;
        }

        if (n > 2)
            largestPrimeNumber = n;
    }

    return largestPrimeNumber;
}

