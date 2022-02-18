//
// Created by Carlos R. Arias on 2/16/22.
//

#ifndef POLYGON_POLYGON_H
#define POLYGON_POLYGON_H

#include "point.h"
#include <string>
using std::string;

class Polygon {
private:
    size_t _sides;
    Point* _points;
public:
    Polygon(size_t sides);
    Polygon(const Polygon& p);
    ~Polygon();
    void SetPoint(const Point& point, int position);
    double Perimeter()const;
    string ToString()const;
    const Polygon& operator=(const Polygon& p); // Assignment operator overload -- DEEP assignments

};


#endif //POLYGON_POLYGON_H
