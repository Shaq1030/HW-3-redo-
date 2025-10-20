// Sikder Task 1
#ifndef SQUARE_H
#define SQUARE_H

class Square {
//class
private:
    double side;

public:
    Square();
    explicit Square(double side);

    void setSide(double side);
    double getSide() const;

    double area() const;
    double perimeter() const;
};

#endif // Square.h