// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 18, 2022
// This program allows a user to convert
// a temperature from celsius to farhenheit
#include <unistd.h>
#include <iostream>
#include <iomanip>

float CalculateFahrenheit() {
    std::string tempCelsius;
    float tempCelsiusFloat;
    float tempFahrenheit;
    // Asks questions and gets user input
    std::cout << "This program converts temperature ";
    std::cout << "in celsius to fahrenheit.\n";
    std::cout << " \n";
    sleep(1);
    std::cout << "Enter the temperature in degrees celsius: ";
    std::cin >> tempCelsius;
    std::cout << " \n";
    sleep(1);

    try {
        // Make sure user input is an integer
        tempCelsiusFloat = std::stof(tempCelsius);

        // Use formula to convert from celsius to fahrenheit
        tempFahrenheit = (9.0 / 5.0) * tempCelsiusFloat + 32.0;
        std::cout << tempCelsius << " degrees celsius is equivalent to ";
        std::cout << tempFahrenheit << " degrees fahrenheit.\n";
        } catch (std::invalid_argument) {
            std::cout << tempCelsius << " is not a number\n";
        }
}

int main() {
    // Call the function to calculate fahrenheit
    CalculateFahrenheit();
}
