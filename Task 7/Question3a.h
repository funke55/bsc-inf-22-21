// Shapes.h

#pragma once

namespace shapes {

    class Square {
    private:
        double sideLength;

    public:
        Square();
        Square(double side);
        ~Square();

        void setSideLength(double side);
        double getSideLength() const;
    };

    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();

        void setBase(double b);
        void setHeight(double h);
        double getBase() const;
        double getHeight() const;
    };

    class Circle {
    private:
        double radius;

    public:
        Circle();
        Circle(double r);
        ~Circle();

        void setRadius(double r);
        double getRadius() const;
    };

} // namespace shapes


