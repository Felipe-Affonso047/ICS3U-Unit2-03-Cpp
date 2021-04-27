// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program calculates the circumference of a circle

#include <iostream>
#include <cmath>

int main()    {
    const int  TAU = 2*M_PI;
    int radius;
    std::cout << "What is the radius of the circle in mm?" << std::endl;
    std::cin >> radius;
    std::cout << std::endl;
    std::cout << "Circumference: " << (TAU*radius) << " mm" << std::endl;
}
