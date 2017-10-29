/*
 * part1.cpp
 * CSC 116 Fall 2017 - Lab 07
 */

#include <iostream>
#include "point.hpp"

int main() {
    Point p0;
    Point p1(1.0, 1.0);
    Point p2(5.9, 0.2);
    Point p3 {p0};
    Point p4;
    Point p5(3.0,2.0);

    p3 = p1;
    p4 = -p1;
    p5 += p2;

    std::cout << p0 << std::endl;
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;
    std::cout << p5 << std::endl;

    std::cout << "Distance between p0 and p1 is " << p0.distance(p1) << std::endl;
    std::cout << "Distance between p1 and p5 is " << p1.distance(p5) << std::endl;
    std::cout << "Distance between p5 and p1 is " << p5.distance(p5) << std::endl;

    return 0;
}
