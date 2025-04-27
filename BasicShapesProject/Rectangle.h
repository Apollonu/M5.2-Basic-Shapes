#pragma once
#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w, const string& n = "Rectangle")
        : length(l), width(w) {
        setName(n);
        calcArea();
    }

    void calcArea() override;

    double getLength() const {return length;}
    double getWidth() const {return width;}
};