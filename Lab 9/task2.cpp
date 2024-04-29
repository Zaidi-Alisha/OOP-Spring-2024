//Alisha Zaidi 23k-0025

#include <iostream>
#include <string>

using namespace std;

class Shape {
    public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual double displayProperties() const = 0;

    virtual ~Shape() {}
};//end shape class

class Circle : public Shape {
private:
    double radius;
public:
    //Parameterized constructor
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14 * radius * radius; }
    double perimeter() const override { return 2 * 3.14 * radius; }

    double displayProperties() const override {
        cout << "Circle properties:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    //Parameterized constructor
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
    double perimeter() const override { return 2 * (length + width); }
    
    double getLength () {
        return length;
    }

    double displayProperties() const override {
        cout << "Rectangle properties:" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

//Inheriting from rectangle because we can say that  
class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}

    double displayProperties() const override {
        cout << "Square properties:" << endl;
        cout << "Side length: " << Rectangle::getLength() << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

class Triangle : public Shape {
protected:

    //Sides of triangle
    double slantSide1; 
    double slantSide2;
    double base;
    double height;

public:
    Triangle(double s1, double s2, double s3) : slantSide1(s1), slantSide2(s2), base(s3) {}
    double perimeter() const override { return slantSide1 + slantSide2 + base; }
    double area() const override { return 0.5 * base * height; }

    double displayProperties() const override {
    cout << "Triangle properties:" << endl;
    cout << "Base: " << base << ", Height: " << height << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side) : Triangle(side, side, side) {}
    double area() const override { return 0.5 * base * height; }

    double displayProperties() const override {
        cout << "Equilateral Triangle properties:" << endl;
        cout << "Side length: " << slantSide1 << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    int choice;
    double radius;
    double length;
    double width;
    double side;
    string playAgain;

    while (playAgain == 'yes' || playAgain == 'Yes') {
        cout << "Select a shape to calculate properties:\n";
        cout << "1. Circle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Equilateral Triangle\n";
        cout << "Enter your choice: ";
        cin >> choice;

        Shape *shapePtr = nullptr;

        switch (choice) {
            case 1:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                shapePtr = new Circle(radius);
                break;
            case 2:
                cout << "Enter length of the rectangle: ";
                cin >> length;
                cout << "Enter width of the rectangle: ";
                cin >> width;
                shapePtr = new Rectangle(length, width);
                break;
            case 3:
                cout << "Enter side length of the square: ";
                cin >> side;
                shapePtr = new Square(side);
                break;
            case 4:
                cout << "Enter side length of the equilateral triangle: ";
                cin >> side;
                shapePtr = new EquilateralTriangle(side);
                break;
            default:
                cout << "Invalid choice!";
                return 1;
        }//end switch

        shapePtr -> displayProperties();

        delete shapePtr;

        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
}//end main

