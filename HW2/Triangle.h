#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double base;
    double height;

public:
    Triangle();
    Triangle(double base, double height);

    void setBase(double base);
    void setHeight(double height);

    double getBase() const;
    double getHeight() const;

    double area() const;
};

// non-member function declarations per specification
double area(const Triangle& t);
void print(const Triangle& t);

#endif // TRIANGLE_H