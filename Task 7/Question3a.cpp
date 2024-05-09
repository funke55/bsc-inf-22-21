// Shapes.cpp

#include "Question3a.h"

namespace shapes {

    Square::Square() : sideLength(0.0) {}

    Square::Square(double side) : sideLength(side) {}

    Square::~Square() {}

    void Square::setSideLength(double side) {
        sideLength = side;
    }

    double Square::getSideLength() const {
        return sideLength;
    }

    Triangle::Triangle() : base(0.0), height(0.0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    Triangle::~Triangle() {}

    void Triangle::setBase(double b) {
        base = b;
    }

    void Triangle::setHeight(double h) {
        height = h;
    }

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    Circle::Circle() : radius(0.0) {}

    Circle::Circle(double r) : radius(r) {}

    Circle::~Circle() {}

    void Circle::setRadius(double r) {
        radius = r;
    }

    double Circle::getRadius() const {
        return radius;
    }

} 