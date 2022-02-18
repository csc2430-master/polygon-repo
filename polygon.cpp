//
// Created by Carlos R. Arias on 2/16/22.
//

#include "polygon.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Polygon::Polygon(size_t sides) : _sides(sides) {
    _points = new Point[_sides];
}

Polygon::Polygon(const Polygon &p): _sides(p._sides) {
    // _points = p._points;  ends up doing a shallow copy :(
    _points = new Point[_sides];
    for (int i = 0; i < _sides; ++i) {
        _points[i] = p._points[i];
    }
}

Polygon::~Polygon() {
    delete[] _points;
}

double Polygon::Perimeter() const {
    double perimeter = 0;
    for (int i = 0; i < _sides - 1; ++i) {
        perimeter += _points[i].Distance(_points[i+1]);
    }
    perimeter += _points[0].Distance(_points[_sides -1]);
    return perimeter;
}

string Polygon::ToString() const {
    stringstream ss;
    ss << "{";
    for (int i = 0; i < _sides; ++i) {
        ss << _points[i].ToString() << ", ";
    }
    ss << "}";
    return ss.str();
}

void Polygon::SetPoint(const Point &point, int position) {
    if (position < 0 || position >= _sides)
        return;
    _points[position] = point; // shallow assignment
}

const Polygon &Polygon::operator=(const Polygon &p) {
    if (this != &p){
        delete[] _points;
        _sides = p._sides;
        _points = new Point[_sides];
        for (int i = 0; i < _sides; ++i) {
            _points[i] = p._points[i];
        }
    }
    return *this;
}










