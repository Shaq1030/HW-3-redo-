#include "Square.h"
#include <iostream>
Square::Square() : side(1) {}
Square::Square(double side) : side(side) {}

void Square::setSide(double s) { side = s; }
double Square::getSide() const { return side; }

double Square::area() const { return side * side; }
double area(const Square& sq) { return sq.getSide() * sq.getSide(); }
void print(const Square& sq) { std::cout << area(sq) << std::endl; }