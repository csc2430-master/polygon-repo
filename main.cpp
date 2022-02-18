



#include <iostream>
#include "point.h"
#include "polygon.h"

using std::cout;
using std::endl;

int main() {
    Polygon square(4);
    square.SetPoint(Point(1,1), 0);
    square.SetPoint(Point(3,1), 1);
    square.SetPoint(Point(3,3), 2);
    square.SetPoint(Point(1,3), 3);
    cout << square.Perimeter() << endl;
    cout << square.ToString() << endl;

    Polygon another = square; // Polygon another(square);
    Polygon pentagonWannaBe(5);

    pentagonWannaBe = square;

    return 0;
}
