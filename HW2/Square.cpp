#include "Square.h"
Square::Square() : side(0) {}
Square::Square(double side) : side(side) {}

void Square::setSide(double s) { side = s; }
double Square::getSide() const { return side; }

double Square::area() const { return side * side; }
double Square::perimeter() const { return 4 * side; }