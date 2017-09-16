/* square.hpp
  
   CSC 116 Fall 2016 - Lab 7
   
*/
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <string>
#include "point.hpp"

class Circle: public Point{
    double radius;
    
public:
// constructors
    Circle(const Circle &sq);
    Circle(double _x, double _y, double _side);
    Circle();
    
// return 0 for a point
    double area();
    double getRadius() const;

// return the name of the class
    std::string name();

    std::string properties();

};

// overload the operator << to print to a given stream
std::ostream &operator<< (std::ostream &output, Point &p);

#endif
