// driver.cpp
// Sikder Task 1
// 10/17/25
// creating empty main function

#include <iostream>
#include "Square.h"
#include "Rectangle.h"
using namespace std;

int main() {

    /************************************************************** */
    /*   You and I need to output a cout for each turn              */
    /****************************************************************/

cout << "Sikder            10/17/25     Commit for Task 1" << endl;
cout << "Prof Crinnion    10/18/25     Commit for Task 2  " << endl;
cout << "Sikder            10/19/25     Commit for Task 3" << endl;

Square sq(5);
cout << "Square side=" << sq.getSide() << ", area=" << sq.area() << ", perimeter=" << sq.perimeter() << endl;

Rectangle rect(3, 4);
cout << "Rectangle " << rect.getWidth() << "x" << rect.getHeight() << ", area=" << rect.area() << ", perimeter=" << rect.perimeter() << endl;

    return 0;
}