//
// Created by Hualong Zhang on 2021/1/25.
//

#include "FizzBuzz.h"

std::string FizzBuzz::numberOff() {
    if (m_number % 3 == 0 && m_number % 5 == 0) {
        return "FizzBuzz";
    }

    if (m_number % 3 == 0 && m_number % 7 == 0) {
        return "FizzWhizz";
    }

    if (m_number % 3 == 0) {
        return "Fizz";
    }

    if (m_number % 5 == 0) {
        return "Buzz";
    }

    if (m_number % 7  == 0) {
        return "Whizz";
    }
}
