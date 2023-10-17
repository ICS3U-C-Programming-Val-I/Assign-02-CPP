// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Oct, 16, 2023
// This program asks the user for the length
// of the side of a hexagon. It then calculates
// and displays the area and perimeter.
#include <iostream>
#include <string>
#include <cmath>

// declare variables
float length, area, perimeter, calculate;

int main() {
    // Extra functionality - getting calculation type
    std::cout << "Before we start,\n";
    std::cout << "Click the corresponding number,";
    std::cout << "For what you would like to calculate?\n";
    std::cout << "Perimeter(1),Area(2) or Both(3).\n";
    std::cin >> calculate;

    if (calculate != 1 && calculate != 2 && calculate != 3) {
        std::cout << "Invalid value imputed restart programme!\n";
        return 0;
    }

    // Input - getting length and units.
    // Extra functionality - getting unit.
    std::string unit;
    std::cout << "What unit would you like the calculations measured in?\n";
    std::cin >> unit;
    // getting length variable.
    std::cout << "What is the length of the sides of the Hexagon ";
    std::cin >> length;

    // Process - Calculating area and perimeter.
    area = (3 * sqrt(3) * pow(length, 2)) / 2;
    perimeter = 6 * length;

    if (calculate == 1) {
        std::cout << "The perimeter is " << perimeter << unit << ".\n";
    }
    if (calculate == 2) {
        std::cout << "The area is " << area << unit << "^2.\n";
    }
    if (calculate == 3) {
        std::cout << "The perimeter is " << perimeter << unit << ".\n";
        std::cout << "The area is " << area << unit << "^2.\n";
    }
}
