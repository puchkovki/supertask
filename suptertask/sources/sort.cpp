#ifndef OSTREAM_
#define OSTREAM_

#include <iostream>

#endif

#ifndef VECTOR_
#define VECTOR_

#include <vector>

#endif

#ifndef HPP_
#define HPP_

#include "../include/sort.hpp"

#endif


std::vector< int> sort(int a, int b) {
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    std::vector< int > sorted;
    sorted.push_back(min);
    sorted.push_back(max);

    return sorted;
}