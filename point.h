//
// Created by Carlos R. Arias on 2/16/22.
//

#ifndef POLYGON_POINT_H
#define POLYGON_POINT_H
#include <string>
using std::string;

class Point {
private:
    double _x;
    double _y;
public:
    Point(double x = 0, double y = 0);
    string ToString()const;
    double Distance(const Point& point)const;

};


#endif //POLYGON_POINT_H
