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
    }
}