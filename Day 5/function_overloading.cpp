#include <iostream>
#include <cmath> // For M_PI constant

class Shape {
public:
    // Function to calculate the area of a triangle
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Function to calculate the area of a circle
    double area(double radius) {
        return M_PI * radius * radius;
    }

    // Function to calculate the area of a rectangle
    double area(double length, double breadth, bool isRectangle) {
        return length * breadth;
    }
};

int main() {
    Shape shape;

    double triangleBase = 5.0, triangleHeight = 10.0;
    double circleRadius = 7.0;
    double rectangleLength = 4.0, rectangleBreadth = 6.0;

    std::cout << "Area of Triangle: " << shape.area(triangleBase, triangleHeight) << std::endl;
    std::cout << "Area of Circle: " << shape.area(circleRadius) << std::endl;
    std::cout << "Area of Rectangle: " << shape.area(rectangleLength, rectangleBreadth, true) << std::endl;

    return 0;
}