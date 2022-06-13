#include "auto.h"

auto autoSum(unsigned int a, unsigned int b) {
    if (a == b) {
        return -1;
    }

    int A = static_cast<int>(a);
    int B = static_cast<int>(b);

    auto value = A + B;

    return value;
}

int callAutoSum(unsigned int a, unsigned int b)
{
    return autoSum(a, b);
}
