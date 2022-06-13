cmake_minimum_required(VERSION 3.22)
project(CppLearning)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppLearning types/auto.h types/auto.cpp main.cpp functions/lambda.cpp functions/lambda.h algorithm/search/binary_search.h algorithm/search/binary_search.cpp algorithm/sort/mergesort.cpp algorithm/sort/mergesort.h stdlib/random.cpp stdlib/random.h algorithm/tools/checksort.cpp algorithm/tools/checksort.h basics/hello_world.cpp basics/hello_world.h)
