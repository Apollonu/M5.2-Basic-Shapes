#pragma once
#include "BasicShape.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    Circle(double x, double y, double r, const string& n = "Circle")
        : xCenter(x), yCenter(y), radius(r) {
        setName(n);
        calcArea();
    }

    void calcArea() override;

    double getXCenter() const {return xCenter;}
    double getYCenter() const {return yCenter;}
    double getRadius() const {return radius;}
};
