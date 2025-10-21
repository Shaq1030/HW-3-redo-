#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : length(1), width(2) {}
Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

void Rectangle::setWidth(double w) { width = w; }
void Rectangle::setLength(double l) { length = l; }

double Rectangle::getWidth() const { return width; }
double Rectangle::getLength() const { return length; }


double Rectangle::area() const { return length * width; }

double area(const Rectangle& r) { return r.getLength() * r.getWidth(); }
void print(const Rectangle& r) { std::cout << area(r) << std::endl; }