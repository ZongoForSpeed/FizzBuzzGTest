#include <gtest/gtest.h>
#include "FizzBuzz.h"


TEST(FizzBuzzShould, return_Given_number) {
    FizzBuzz fizzBuzz;

    EXPECT_EQ(fizzBuzz.given(1), "1");
    EXPECT_EQ(fizzBuzz.given(2), "2");
    EXPECT_EQ(fizzBuzz.given(4), "4");
}

TEST(FizzBuzzShould, Return_Fizz_Given_Modulo_3) {
    FizzBuzz fizzBuzz;

    EXPECT_EQ(fizzBuzz.given(3), "Fizz");
    EXPECT_EQ(fizzBuzz.given(6), "Fizz");
    EXPECT_EQ(fizzBuzz.given(9), "Fizz");
}

TEST(FizzBuzzShould, Return_Buzz_Given_Modulo_5) {
    FizzBuzz fizzBuzz;

    EXPECT_EQ(fizzBuzz.given(5), "Buzz");
    EXPECT_EQ(fizzBuzz.given(10), "Buzz");
    EXPECT_EQ(fizzBuzz.given(20), "Buzz");
}

TEST(FizzBuzzShould, Return_FizzBuzz_Given_Modulo_3_And_5) {
    FizzBuzz fizzBuzz;

    EXPECT_EQ(fizzBuzz.given(15), "FizzBuzz");
}

