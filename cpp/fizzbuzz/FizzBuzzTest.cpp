//
// Created by Hualong Zhang on 2021/1/25.
//
#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "FizzBuzz.h"

SCENARIO("FizzBuzz", "FizzBuzz") {
    GIVEN("given an number") {
        WHEN("divisable by 3") {
            CHECK(FizzBuzz().numberOff() == "Fizz");
        }
        WHEN("divisable by 5") {
            CHECK(FizzBuzz().numberOff() == "Buzz");
        }
    }
}