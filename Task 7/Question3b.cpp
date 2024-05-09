// Area.cpp

#include "Question3b.h"
#include <cmath>

double Area::calculateArea(const shapes::Square& square) {
    return square.getSideLength() * square.getSideLength();
}

double Area::calculateArea(const shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::calculateArea(const shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}