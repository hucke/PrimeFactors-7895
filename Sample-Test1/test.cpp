#include "pch.h"
#include "../PrimeFactors/prime_factor.cpp"


TEST(PrimeFactors, Of1) {
    PrimeFactor prime_factor;
    vector<int> expected = {};
    EXPECT_EQ(expected, prime_factor.of(1));
}