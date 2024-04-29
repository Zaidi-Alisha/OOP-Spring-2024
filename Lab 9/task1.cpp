//Alisha Zaidi 23k-0025

#include <iostream>
using namespace std;

const double Pi = 3.142;

class Shape {
public:
    //Area of circle
    double calculateArea(double radius) {
        return Pi * radius * radius;
    }

    //Perimeter of circle
    double calculatePerimeter(double radius) {
        return 2 * Pi * radius;
    }

    //Area of rectangle
    int calculateArea(int length, int  width) {
        return length * width;
    }

    //Perimeter of rectangle
    double calculatePerimeter(double length, double width) {
        return 2 * (length + width);
    }

    //Area of triangle 
    double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }

    //Perimeter of triangle 
    double calculatePerimeter(double s1, double s2, double s3) {
        return s1 + s2 + s3;
    }
};

int main() {
    Shape shape;

    //Calculate area and perimeter of a circle
    double radius = 4.0;
    double circleArea = shape.calculateArea(radius);
    double circlePerimeter = shape.calculatePerimeter(radius);
    cout << "Circle Area: " << circleArea << ", Perimeter: " << circlePerimeter << endl;

    //Calculate area and perimeter of a rectangle
    double length = 6.0;
    double width = 5.0;
    double rectangleArea = shape.calculateArea(length, width);
    double rectanglePerimeter = shape.calculatePerimeter(length, width);
    cout << "Rectangle Area: " << rectangleArea << ", Perimeter: " << rectanglePerimeter << endl;

    //Calculate area and perimeter of a triangle
    double base = 2.0;
    double height = 3.0;
    double triangleArea = shape.calculateArea(base, height);
    double side1 = 2.0, side2 = 4.0, side3 = 5.0;
    double trianglePerimeter = shape.calculatePerimeter(side1, side2, side3);
    cout << "Triangle - Area: " << triangleArea << ", Perimeter: " << trianglePerimeter << endl;

    return 0;
}//end main
