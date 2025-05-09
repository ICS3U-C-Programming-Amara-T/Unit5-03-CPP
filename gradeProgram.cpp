// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: May 9, 2025
// This is a program gets the sum of a number

#include <cstdio>
#include <iostream>
#include <string>

int CalcGrade(std::string level) {
    if (level == "4++") {
        return 97;
    }
    if (level == "4+") {
        return 95;
    }
    if (level == "4") {
        return 90;
    }
    if (level == "4-") {
        return 84;
    }
    if (level == "3+") {
        return 78;
    }
    if (level == "3") {
        return 74;
    }
    if (level == "3-") {
        return 71;
    }
    if (level == "2+") {
        return 78;
    }
    if (level == "2") {
        return 64;
    }
    if (level == "2-") {
        return 61;
    }
    if (level == "1+") {
        return 56;
    }
    if (level == "1") {
        return 54;
    } else {
        return -1;
    }
}

int main() {
    // Initialize variables
    std::string level;

    // Get grade level
    std::cout << "Enter a your grade level e.g (4, 3+, 2-) :";
    std::cin >> level;

    // Call function and display grade level
    int grade = CalcGrade(level);
    if (grade == -1) {
        printf("Invalid grade level\n");
    } else {
        std::cout << "The level " << level << " is "
        << grade << "% " << std::endl;
    }
}
