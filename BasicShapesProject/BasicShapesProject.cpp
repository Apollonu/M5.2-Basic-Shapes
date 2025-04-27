#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main() {
    const int numShapes = 5;
    BasicShape* shapes[numShapes];

    shapes[0] = new Rectangle(4.0, 5.0, "Rectangle 1");
    shapes[1] = new Rectangle(3.0, 6.0, "Rectangle 2");
    shapes[2] = new Circle(0.0, 0.0, 2.0, "Circle 1");
    shapes[3] = new Circle(1.0, 1.0, 3.0, "Circle 2");
    shapes[4] = new Square(4.0, "Square 1");

    for (int i = 0; i < numShapes; i++) {
        cout << shapes[i]->getName() << " has an area of " << shapes[i]->getArea() << endl;
        delete shapes[i];
    }

    return 0;
}