// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate smallest number

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int calculatedSmallestNumber(std::array<int, N> calculateMyNumbers) {
    // This function calculate smallest number
    int totalNumber = calculateMyNumbers[0];

    // process
    for (int loopNumberSecond : calculateMyNumbers) {
        if (loopNumberSecond < totalNumber) {
            totalNumber = loopNumberSecond;
        }
    }

    return totalNumber;
}

int main() {
    // This Program calculate average
    std::array<int, 10> myNumbers;

    int loopNumberFirst;

    int calculateNumber;
    int smallestNumber;

    // output
    std::cout << "Here is a list of random numbers:" << std::endl;
    std::cout << "" << std::endl;

    // process
    for (loopNumberFirst = 0; loopNumberFirst < 10; loopNumberFirst++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        calculateNumber = idist(rgen);
        myNumbers[loopNumberFirst] = calculateNumber;
        // output
        std::cout << "The random number " << loopNumberFirst + 1 << " is "
        << calculateNumber << std::endl;
    }

    // call functions
    smallestNumber = calculatedSmallestNumber(myNumbers);

    std::cout << "" << std::endl;
    std::cout << "The smallest number is: " << smallestNumber << std::endl;

    std::cout << "\nDone" << std::endl;
}
