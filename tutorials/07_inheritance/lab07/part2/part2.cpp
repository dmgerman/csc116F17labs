/*
 * part2.cpp
 *
 * CSC 116 Fall 2017 - Lab 07
 */
#include <iostream>
#include <string>

#include "point.hpp"
#include "rectangle.hpp"

int main(int argc, char *argv[]) {

    Point p0;
    Point p1(1., 2.);

    Rectangle rect(p0, p1);

    std::cout << "Rectangle type: " << rect.name() << std::endl;
    std::cout << "Rectangle center: " << rect.center() << std::endl;
    std::cout << "Rectangle dimensions: " << rect.width() << " x " << rect.height() << std::endl;
    std::cout << "Rectangle min and max: " << rect.getMin() << " and " << rect.getMax() << std::endl;
    return 0;
}
