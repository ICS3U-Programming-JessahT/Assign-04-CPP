// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 23/11/2022
// This program lists double digit numbers that sum to 60
// and have a difference of 14
// altered to have user input

#include <iostream>

int main() {
// declare variables
    std::string userSum;
    std::string userDiff;
    int sum, diff;
    int counter1;
    int counter2;
    float sumFloat, diffFloat;

    std::cout << "Enter a sum: ";
    std::cin >> userSum;
    std::cout << "Enter a difference: ";
    std::cin >> userDiff;
    std::cout << " " << std::endl;

    try {  // change str and float to int
        sum = std::stoi(userSum);
        diff = std::stoi(userDiff);
        sumFloat = std::stof(userSum);
        diffFloat = std::stof(userDiff);

        if (sumFloat !=
        sum && diffFloat != diff) {
            std::cout << "Invalid";
        } else if (sum >= 0 && diff >= 0) {
// integer 1
            for (int counter1 = 10; counter1 <= sum; counter1++) {
// integer 2
                for (int counter2 = 10; counter2 <= sum; counter2++) {
                    if (counter1 + counter2 == sum) {
                        if (counter1 - counter2 == diff ||
                            counter2 - counter1 == diff) {
                            std::cout << counter1 << " " <<  // display pairs
                            counter2 << std::endl;
                            }
                        }
                    }
                }
        } else {
            std::cout << "Invalid";
        }
    } catch(std::invalid_argument) {
        std::cout << "Invalid";
    }
}
