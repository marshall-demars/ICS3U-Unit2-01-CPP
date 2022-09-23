// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: Sept 2022
// This program calculates the area and perimeter of a circle
// With a radius of 15mm

#include <iostream>
#include <cmath>

int main() {
    // this function calculates area and perimeter
    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << "\nArea is " << (M_PI * pow(15, 2)) << "mm²." << std::endl;
    std::cout << "Perimeter is " << (2 *M_PI * 15) << "mm." << std::endl;
    std::cout << std::endl;

    std::cout << "\nDone.";
}
