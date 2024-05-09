// main.cpp

#include <iostream>
#include "Question3a.h"
#include "Question3b.h"

int main() {
    char choice;
    bool quit = false;

    while (!quit) {
        std::cout << "\nOptions:\n"
                     "1. Calculate the area of a square\n"
                     "2. Calculate the area of a triangle\n"
                     "3. Calculate the area of a circle\n"
                     "4. Quit\n"
                     "Enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                shapes::Square square(side);
                double area = Area::calculateArea(square);
                std::cout << "Area of the square: " << area << std::endl;
                break;
            }
            case '2': {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                shapes::Triangle triangle(base, height);
                double area = Area::calculateArea(triangle);
                std::cout << "Area of the triangle: " << area << std::endl;
                break;
            }
            case '3': {
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                shapes::Circle circle(radius);
                double area = Area::calculateArea(circle);
                std::cout << "Area of the circle: " << area << std::endl;
                break;
            }
            case '4': {
                quit = true;
                std::cout << "Exiting the program.\n";
                break;
            }
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                break;
        }
    }

    return 0;
}