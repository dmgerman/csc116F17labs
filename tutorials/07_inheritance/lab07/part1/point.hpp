/* point.cpp
  
   CSC 116 Fall 2016 - Lab 6
   
*/
#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>

class Point{
    double x;
    double y;
    
public:
// constructors
    Point();
    Point(const double _x, const double _y);
    Point(const Point &p);
    
    
// get coordinates
    double getX()const;
    double getY() const;

// return a new point with the inverted coordinates
    Point operator-();

// assignment operator
    Point &operator=(Point p2);

// translate a point by the coordinates of the other point    
    Point &operator+=(Point p2);
    
// compute the distance to another point
    double distance(Point p2);

// return 0 for a point
    virtual double area();

// return the name of the class
    virtual std::string name();

// return a string describing the current object
    virtual std::string properties();


};

// overload the operator << to print to a given stream
std::ostream &operator<< (std::ostream &output, Point &p);

#endif
