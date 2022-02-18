//
// Created by Carlos R. Arias on 2/16/22.
//

#include "point.h"

#include <string>
#include <sstream>
#include <cmath>
using std::string;
using std::stringstream;

Point::Point(double x, double y): _x(x), _y(y) {

}

string Point::ToString() const {
    stringstream ss;
    ss << "[" << _x << ", " << _y << "]";
    return ss.str();
}

double Point::Distance(const Point &point) const {
    return sqrt(pow(_x - point._x, 2) + pow(_y - point._y, 2));
}
