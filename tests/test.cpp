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

#include <gtest/gtest.h>

TEST (SORT, INT) {
    int a = 3, b = 5; 
    std::vector< int > test;
    test.push_back(3);
    test.push_back(5);

    std::vector< int > result = sort(a, b);
    EXPECT_EQ(result, test);
}