/* square.hpp
  
   CSC 116 Fall 2016 - Lab 7
   
*/

#include <string>
#include <iostream>
#include <sstream>
#include "point.hpp"
#include "square.hpp"

Square::Square(const Square &sq)
{
    // write your code here
}

Square::Square(double _x, double _y, double _side)
{
    // write your code here
}

Square::Square()
{
    // write your code here
}

double Square::getSide()  const
{
    // write your code here
}

double Square::area() 
{
    // write your code here
}

std::string Square::name() 
{
    return "square";
}

std::string Square::properties() 
{
    std::ostringstream ss;
    
    ss << " and length of side: " << getSide();

    return Point::properties() + ss.str();
}
