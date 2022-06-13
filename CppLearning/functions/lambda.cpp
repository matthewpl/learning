#include "lambda.h"

#include <iostream>

void callLambda() {
    int a = 1;
    int b = 2;
    [](...){ std::cout << "Test lambda call" << std::endl; }(a, b);
}
