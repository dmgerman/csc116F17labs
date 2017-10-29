/* point.hpp
 * CSC 116 Fall 2017 - Lab 7
 */

#ifndef POINT_HPP
#define POINT_HPP

#include <ostream>

class Point{
    double mX;
    double mY;

public:
    // constructors
    Point();
    Point(double x, double y);
    Point(Point const & p);

    // get coordinates
    double getX() const;
    double getY() const;

    // return a new point with the inverted coordinates
    Point operator-();

    // assignment operator
    Point &operator=(Point p2);

    // translate a point by the coordinates of the other point
    Point &operator+=(Point p2);

    // compute the distance to another point
    double distance(Point p2);
};

// overload the operator << to print to a given stream
std::ostream &operator<< (std::ostream &output, Point &p);
#endif
