//Alisha Zaidi(23K-0025)

#include <iostream>
#include <string>

using namespace std;

class Shape{
private:
string name;
double area;

public:
Shape () {}
Shape (string name, double area) : name(name), area (area) {}

double getArea() 
{
    return area;
}

Shape operator+ (Shape obj) {
    Shape temp;
    temp.area = area + obj.area;
    return temp;
}
};

int main () 
{
    Shape shape1("Square", 25);
    Shape shape2("Reactangle", 14);
    
    double totalArea = shape1.getArea() + shape2.getArea();
    cout << "Total area is: " << totalArea << endl;
    return 0;
}//end main