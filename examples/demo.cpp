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

#ifndef CPP_
#define CPP_

#include "../sources/sort.cpp"

#endif

int main() {
    int a, b;
    std::cin >> a >> b;
    std::vector< int > sorted = sort(a, b);

    for(const int& i: sorted) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}