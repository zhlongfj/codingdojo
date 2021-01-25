//
// Created by Hualong Zhang on 2021/1/25.
//
#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "FizzBuzz.h"

SCENARIO("FizzBuzz", "FizzBuzz") {
    GIVEN("given an number") {
        WHEN("divisable by 3") {
            CHECK(FizzBuzz(3).numberOff() == "Fizz");
        }

        WHEN("divisable by 5") {
            CHECK(FizzBuzz(5).numberOff() == "Buzz");
        }

        WHEN("divisable by 7") {
            CHECK(FizzBuzz(7).numberOff() == "Whizz");
        }

        WHEN("divisable by 3 and 5") {
            CHECK(FizzBuzz(15).numberOff() == "FizzBuzz");
        }

        WHEN("divisable by 3 and 7") {
            CHECK(FizzBuzz(21).numberOff() == "FizzWhizz");
        }

        WHEN("divisable by 5 and 7") {
            CHECK(FizzBuzz(70).numberOff() == "BuzzWhizz");
        }

        WHEN("divisable by 3, 5 and 7") {
            CHECK(FizzBuzz(105).numberOff() == "FizzBuzzWhizz");
        }

        WHEN("include 3") {
            CHECK(FizzBuzz(13).numberOff() == "Fizz");
        }

        WHEN("normal number") {
            CHECK(FizzBuzz(2).numberOff() == "2");
        }
    }
}