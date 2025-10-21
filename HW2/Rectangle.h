// Sikder Task 3
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double length;

public:
    Rectangle();
    Rectangle(double length, double width);

    void setWidth(double width);
    void setLength(double length);

    double getWidth() const;
    double getLength() const;

    double area (const Rectangle& r ) const;
    void print (const Rectangle& r);
};

#endif // RECTANGLE_H