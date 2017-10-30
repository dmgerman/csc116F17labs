/*
 * part1.cpp
 * CSC 116 Fall 2017 - Lab 07
 */

#include <iostream>
#include "point.hpp"

int main() {
    std::cout << "Calling Constructors:" << std::endl;

    Point p0;
    Point p1(1.0, 1.0);
    Point p2(5.9, 0.2);
    Point p3 {p0};
    Point p4(p0);
    Point p5(3.0,2.0);

    std::cout << "p0: " << p0 << std::endl;
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "p3: " << p3 << std::endl;
    std::cout << "p4: " << p4 << std::endl;
    std::cout << "p5: " << p5 << std::endl;

    std::cout << "Performing Operations:" << std::endl;

    p3 = p1;
    p4 = -p1;
    p5 += p2;

    std::cout << "p3  =  p1: p3 = " << p3 << std::endl;
    std::cout << "p4  = -p1: p4 = " << p4 << std::endl;
    std::cout << "p5 +=  p2: p5 = " << p5 << std::endl;

    std::cout << "p1 + p3 = " << p1 + p3 << std::endl;
    std::cout << "p1 * 2  = " << p1 * 2 << std::endl;

    std::cout << "Computing Distances:" << std::endl;
    std::cout << "Distance between p0 and p1 is " << p0.distance(p1) << std::endl;
    std::cout << "Distance between p3 and p4 is " << p3.distance(p4) << std::endl;
    std::cout << "Distance between p4 and p3 is " << p4.distance(p3) << std::endl;

    return 0;
}
