/* point.cpp
  
   CSC 116 Fall 2016 - Lab 7
   
*/

#include <iostream>
#include <cmath>
#include <sstream>
#include "point.hpp"

// constructors

// create from another point
Point::Point(const Point &p)
{
    // write your code here
}

// create from two dimensions
Point::Point(const double _x, const double _y)
{
    // write your code here
}

// default constructor
Point::Point()
{
    // write your code here
}

// return the X coordinate of the point
double Point::getX() const
{
    // write your code here
}

// return the Y coordinate of the point
double Point::getY() const
{
    // write your code here

}

// return a new point with the coordinates
// inverted:
//   the new point will have coordinates
// at (-getX(), -getY())
Point Point::operator-()
{
    Point temp;
    // write your code here
    
    return temp;
}

// set the coordinates of the current point
// to the coordinates of p2
Point &Point::operator=(Point p2)
{
    // write your code here

    /// this function should return *this
    return *this;
}

// increment the coordinates of the current point
// by the coordinates of p2
Point &Point::operator+=(Point p2)
{
    // write your code here

    /// this function should return *this
    return *this;
}

// compute the distance between the current
// point and the point p2
double Point::distance(Point p2)
{
    // write your code here
}

// return NAN
double Point::area()
{
    return NAN;
}

// return "point"
std::string Point::name()
{
    // write your code here

}

std::string Point::properties()
{
    std::ostringstream ss;
    
    ss <<  "Object of type ["  + name()
       << "]. Location (" << getX() << "," << getY()
       << ") with area: " << area();

    return ss.str();
}


// add the operator << to allow printing directly to
// a stream
std::ostream &operator<< (std::ostream &output, Point &p)
{
    output << p.properties()  << std::endl;
    return output;
}    
