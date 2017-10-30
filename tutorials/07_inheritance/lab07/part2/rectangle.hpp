/*
 * rectangle.hpp
 * CSC 116 Fall 2017 - Lab 07
 *
 * Definition of the rectangle class
 */

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "point.hpp"
#include "shape.hpp"

class Rectangle: public Shape {
public:


    /*
     * Constructors
     */


    /*       +----+ (max)
     *       |    |
     * (min) +----+
     */
    Rectangle(Point const & min, Point const & max);

    // x and y are the min coordinate,
    // width and height will be positive
    //
    // If you're bored, try implementing this so width and height can be
    // negative
    Rectangle(double x, double y, double width, double height);

    /*
     * Overridden Virtual Methods
     *
     * These are the methods that override the implementation by the base
     * class (shape)
     *
     * These methods are shared with all shapes
     */

    // Calculate the area of the rectangle
    double area() const override;

    // Calculate the perimeter of the rectangle
    double perimeter() const override;

    // Find the center of the rectangle
    Point center() const override;

    // Return the name of the class
    std::string name() const override;

    /*
     * These methods are specific to the Rectangle
     */

    // Width of the rectangle
    double width() const;
    // Height of the rectangle
    double height() const;

    Point getMin() const;
    Point getMax() const;

private:
    Point mMin;
    Point mMax;
};


#endif // RECTANGLE_HPP
