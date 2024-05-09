// Area.h

#pragma once

#include "Question3a.h"

class Area {
public:
    static double calculateArea(const shapes::Square& square);
    static double calculateArea(const shapes::Triangle& triangle);
    static double calculateArea(const shapes::Circle& circle);
};

