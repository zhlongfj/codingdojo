//
// Created by Hualong Zhang on 2021/1/25.
//
#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

SCENARIO("FizzBuzz", "FizzBuzz") {
    GIVEN("given an number") {
        WHEN("divisable by 3") {
            FizzBuzz fizzBuzz;
            std::string number = fizzBuzz.numberOff();
            CHECK(number == "Fizz");
        }
    }
}