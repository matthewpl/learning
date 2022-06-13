#include <iostream>
#include <vector>

#include "basics/hello_world.h"
#include "types/auto.h"
#include "functions/lambda.h"
#include "algorithm/sort/mergesort.h"
#include "algorithm/tools/checksort.h"
#include "algorithm/search/binary_search.h"

template<auto n> // C++17 auto parameter declaration
auto f() -> std::pair<decltype(n), decltype(n)> // auto can't deduce from brace-init-list
{
    return {n, n};
}

int main() {
    helloWorld();

    std::cout << "Auto sum(10, 13) = " << callAutoSum(10, 13) << std::endl;

    callLambda();

    auto [v, w] = f<0>();
    auto x = f<1>();

    std::cout << typeid(v).name() << std::endl;
    std::cout << typeid(w).name() << std::endl;
    std::cout << typeid(x).name() << std::endl;

    std::vector<int> originalInputArray = {33, 14, 12, 2, 9, 6, 4, 1, 2};
    std::vector<int> inputArray(originalInputArray);

    mergeSortIterative(inputArray);

    if (check_sort(originalInputArray, inputArray) == false) {
        std::cerr << "mergeSortIterative returned incorrect result!" << std::endl;

        return 1;
    }

    std::cout << "Merge sort:" << std::endl;

    for (int i : inputArray) {
        std::cout << i << " ";
    }

    std::cout << "Binary search:" << std::endl;

    for (int i = 0; i < 40; i++) {
        std::cout << "Found " << i << " on position: " << binary_search(inputArray, i) << std::endl;
    }

    return 0;
}
