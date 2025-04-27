#pragma once
#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    Square(double s, const string& n = "Square")
        : Rectangle(s, s, n), side(s) {
    }

    double getSide() const {return side;}
};