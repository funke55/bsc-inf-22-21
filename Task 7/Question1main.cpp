// main.cpp

#include <iostream>
#include "Question1.h"

int main() {
    Rectangle rectangle;
    Rectangle rectangle2;

    float length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    rectangle.setLength(length);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    rectangle.setWidth(width);

    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    std::cout << "\nEnter the length of the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    rectangle2 = Rectangle(length, width);

    std::cout << "Area of the second rectangle: " << rectangle2.calculateArea() << std::endl;

    return 0;
}