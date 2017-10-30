/*
 * part3.cpp
 *
 * CSC 116 Fall 2017 - Lab 07
 */

#include <iostream>
#include <string>

#include "square.hpp"
#include "point.hpp"

int main(int argc, char *argv[]) {

  Square square(Point(), 2);

  std::cout << "square Class: " << square.name() << std::endl;
  std::cout << "square area: "  << square.area() << std::endl;
  std::cout << "square dimensions: "  << square.width() << " x " << square.height() << std::endl;
  std::cout << "square center: "  << square.center() << std::endl;
  std::cout << "square min/max: " << square.getMin() << " " << square.getMax() << std::endl;

  Square square1(Point(1, 2), 3);
  std::cout << "Square1 Class: " << square1.name() << std::endl;
  std::cout << "square1 area: "  << square1.area() << std::endl;
  std::cout << "square1 dimensions: "  << square1.width() << " x " << square1.height() << std::endl;
  std::cout << "square1 center: " << square1.center() << std::endl;
  std::cout << "square min/max: " << square1.getMin() << " " << square1.getMax() << std::endl;

  return 0;
}
