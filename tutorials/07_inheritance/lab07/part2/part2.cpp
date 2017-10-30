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

    Rectangle rect1(p1, {3, 3});
    std::cout << "Rectangle 1 type: " << rect1.name() << std::endl;
    std::cout << "Rectangle 1 center: " << rect1.center() << std::endl;
    std::cout << "Rectangle 1 dimensions: " << rect1.width() << " x " << rect1.height() << std::endl;
    std::cout << "Rectangle 1 min and max: " << rect1.getMin() << " and " << rect1.getMax() << std::endl;

    return 0;
}
