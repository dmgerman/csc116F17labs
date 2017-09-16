/* part1.CPO
  
   CSC 116 Fall 2016 - Lab 7
   
*/
#include <iostream>
#include <string>
#include "point.hpp"
#include "circle.hpp"

int main()
{
    Point p0(0.0,0.0);

    Point p1(3.0, 4.0);

    Circle s1(1.0, 1.0, 1.0);
    Circle s2(s1);
    Circle s3;
    Circle s4(0,0,2.0);

    s3 = s1;

    s3 += p1;

    std::cout << p0 << std::endl;
    std::cout << p1 << std::endl;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;

    std::cout << "Distance between s1 and s2 is " << s1.distance(s2) << std::endl;
    std::cout << "Distance between s1 and s3 is " << s1.distance(s3) << std::endl;
    std::cout << "Distance between s1 and p1 is " << s1.distance(p1) << std::endl;

    return 0;
}
