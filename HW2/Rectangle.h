// Sikder Task 3
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double width, double height);

    void setWidth(double width);
    void setHeight(double height);

    double getWidth() const;
    double getHeight() const;

    double area() const;
    double perimeter() const;
};

#endif // RECTANGLE_H