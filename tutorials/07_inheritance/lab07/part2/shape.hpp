/*
 * shape.hpp
 * CSC 116 Fall 2017 - Lab 07
 */

#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "point.hpp"

class Shape {
public:

  // Abstract methods
  virtual double area() const = 0;
  virtual double perimeter() const = 0;
  virtual Point center() const = 0;

  virtual std::string name() const {
    return "Shape";
  }
};

#endif /* ifndef SHAPE_HPP */
