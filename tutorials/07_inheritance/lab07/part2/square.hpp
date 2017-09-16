/* square.hpp
  
   CSC 116 Fall 2016 - Lab 7
   
*/
#ifndef SQUARE_HPP
#define SQUARE_HPP

#include <string>
#include "point.hpp"

class Square: public Point{
    double side;
    
public:
// constructors
    Square(const Square &sq);
    Square(double _x, double _y, double _side);
    Square();
    
    double area();
    double getSide() const;

    std::string name();

    std::string properties();

};

// overload the operator << to print to a given stream
std::ostream &operator<< (std::ostream &output, Point &p);

#endif
