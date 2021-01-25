//
// Created by Hualong Zhang on 2021/1/25.
//

#include "FizzBuzz.h"

std::string FizzBuzz::numberOff() {
    if (std::to_string(m_number).find("3") != std::string::npos) {
        return "Fizz";
    }

    std::string result;
    if (m_number % 3 == 0) {
        result += "Fizz";
    }

    if (m_number % 5 == 0) {
        result += "Buzz";
    }

    if (m_number % 7  == 0) {
        result += "Whizz";
    }
    return  !result.empty() ? result : std::to_string(m_number);
}
