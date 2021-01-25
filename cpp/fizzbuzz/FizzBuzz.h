//
// Created by Hualong Zhang on 2021/1/25.
//

#ifndef FIZZBUZZ_FIZZBUZZ_H
#define FIZZBUZZ_FIZZBUZZ_H


#include <string>

class FizzBuzz {

public:
    FizzBuzz(const int number): m_number(number) {};
    std::string numberOff();

private:
    const int m_number = 0;
};


#endif //FIZZBUZZ_FIZZBUZZ_H
