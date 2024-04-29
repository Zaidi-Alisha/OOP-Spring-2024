//Question 1:

#include <iostream>

using namespace std;

class Square {
private:
    float sideLength;
    float area;
    static float areas;

public:
    //Default constructor
    Square() : sideLength(0), area(0) {}

    //Parameterized constructor 
    Square(float side) : sideLength(side), area(0) {}

    //Function to calculate area
    void calculateArea() {
        area = sideLength * sideLength;
        areas += area;
    }//end function

    //Getters and Setters
    float getSideLength() const {
        return sideLength;
    }

    void setSideLength(float side) {
        sideLength = side;
    }

    float getArea() const {
        return area;
    }

    static float getAllAreas() {
        return areas;
    }
};

float Square::areas = 0; 

int main() {
    Square square1(3.0);
    square1.calculateArea();
    cout << "Area of first square: " << square1.getArea() << endl;
    cout << "Areas: " << Square::getAreas() << endl;

    Square square2(4.0);
    square2.calculateArea();
    cout << "Area of second square: " << square2.getArea() << endl;
    cout << "Areas: " << Square::getAreas() << endl;

    Square square3(5.0);
    square3.calculateArea();
    cout << "Area of third square: " << square3.getArea() << endl;
    cout << "Areas: " << Square::getAllAreas() << endl;

    return 0;
}//end main