#include "Circle.h"

void Circle::calcArea() {
    double area = M_PI * radius * radius;
    setArea(area);
}