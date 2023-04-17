
#include "doctest.h"
#include "sources/Fraction.hpp"
#include <stdexcept>
#include "iostream"
#include "stdio.h"
using namespace ariel;

TEST_CASE("Fraction addition") {
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction result = f1 + f2;
    CHECK(result == Fraction(5, 6));
}
TEST_CASE("Fraction addition with float") {
    float a = 0.5;
    Fraction f2(1, 3);
    Fraction result = a + f2;
    CHECK(result == Fraction(5, 6));
}

TEST_CASE("Fraction subtraction") {
    Fraction f1(2, 3);
    Fraction f2(1, 6);
    Fraction result = f1 - f2;
    CHECK(result == Fraction(5, 6));
}
TEST_CASE("Fraction subtraction with float") {
    float a = 1.5;
    Fraction f2(1, 2);
    Fraction result = a - f2;
    CHECK(result == Fraction(1, 1));
}

TEST_CASE("Fraction multiplication") {
    Fraction f1(2, 3);
    Fraction f2(3, 4);
    Fraction result = f1 * f2;
    CHECK(result == Fraction(1, 2));
}
TEST_CASE("Fraction multiplication with float") {
    float a = 0.25;
    Fraction f2(1, 4);
    Fraction result = a* f2;
    CHECK(result == Fraction(1, 2));
}

TEST_CASE("Fraction division") {
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction result = f1 / f2;
    CHECK(result == Fraction(2, 3));
}
TEST_CASE("Fraction division with float") {
    float a = 0.5;
    Fraction f2(3, 4);
    Fraction result = a / f2;
    CHECK(result == Fraction(2, 3));
}

TEST_CASE("Fraction equality") {
    Fraction f1(1, 2);
    Fraction f2(2, 4);
    CHECK(f1 == f2);
}

TEST_CASE("Fraction less than") {
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    CHECK(f1 < f2);
}

TEST_CASE("Fraction greater than") {
    Fraction f1(3, 4);
    Fraction f2(1, 2);
    CHECK(f1 > f2);
}

TEST_CASE("Fraction increment") {
    Fraction f(1, 2);
    ++f;
    CHECK(f == Fraction(3, 2));
    f++;
    CHECK(f == Fraction(5, 2));
}

TEST_CASE("Fraction decrement") {
    Fraction f(5, 2);
    --f;
    CHECK(f == Fraction(3, 2));
    f--;
    CHECK(f == Fraction(1, 2));
}

TEST_CASE("Fraction default constructor") {
    Fraction f;
    CHECK(f.getNumerator() == 0);
    CHECK(f.getDenominator() == 1);
}


TEST_CASE("Fraction constructor") {
    Fraction f1(1, 2);
    CHECK(f1.getNumerator() == 1);
    CHECK(f1.getDenominator() == 2);
    Fraction f2(0, 3);
    CHECK(f2.getNumerator() == 0);
    CHECK(f2.getDenominator() == 1);
}

TEST_CASE("Fraction getNumerator") {
    Fraction f1(1, 2);
    CHECK(f1.getNumerator() == 1);
    Fraction f2(3, 4);
    CHECK(f2.getNumerator() == 3);
}

TEST_CASE("Fraction getDenominator") {
    Fraction f1(1, 2);
    CHECK(f1.getDenominator() == 2);
    Fraction f2(3, 4);
    CHECK(f2.getDenominator() == 4);
}


