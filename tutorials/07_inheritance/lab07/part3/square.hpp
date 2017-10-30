/*
 * square.hpp
 *
 * CSC 116 Fall 2017 - Lab 07
 */

#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "rectangle.hpp"

// A square is a rectangle

class Square : public Rectangle {
public:
  Square(Point const & min, double width);

  std::string name() const override {
    return "Square";
  }

};

#endif /* ifndef SQUARE_HPP */
