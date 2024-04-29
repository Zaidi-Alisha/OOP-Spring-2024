//Alisha Zaidi(23K-0025)

#include <iostream>
using namespace std;

class PrintClass {
public:
   
    void displayPerimeter(const class Perimeter& p); 
};

class Perimeter {
private:
    double length;
    double breadth;

public:
    
    Perimeter(double l, double b) : length(l), breadth(b) {}

    
    friend class PrintClass;

   
    double calculate() const {
        double calc= 2 * (length + breadth);
        return calc;
    }
};


void PrintClass::displayPerimeter(const Perimeter& p) {
    cout << "Perimeter: " << p.calculate() << endl;
}

int main() {
    
    Perimeter peri(25.0, 60.0);

    
    PrintClass print;
    print.displayPerimeter(peri);

    return 0;
}
