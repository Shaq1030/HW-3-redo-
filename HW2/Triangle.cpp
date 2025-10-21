#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : base(2), height(1) {}
Triangle::Triangle(double b, double h) : base(b), height(h) {}

void Triangle::setBase(double b) { base = b; }
void Triangle::setHeight(double h) { height = h; }

double Triangle::getBase() const { return base; }
double Triangle::getHeight() const { return height; }

double Triangle::area() const { return 0.5 * base * height; }

// non-member function definitions per specification
double area(const Triangle& t) { return 0.5 * t.getBase() * t.getHeight(); }
void print(const Triangle& t) { std::cout << area(t) << std::endl; }