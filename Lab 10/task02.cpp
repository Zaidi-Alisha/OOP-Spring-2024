//Alisha Zaidi(23K-0025)

#include <iostream>
#include <string>

using namespace std;

class Decrement {
private:
    int numb;
public:
    Decrement(int n) : numb(n) {}

    //Overloading prefix
    Decrement operator--()
    {
        numb *= 4;
        return *this;
    }

    // overloading postfex
    Decrement operator--(int)
    {
       Decrement temp = *this;
        numb /= 4;
        return temp;
    }

    // Function to display the value
    void display() {
        cout << "Value: " << numb << endl;
    }
};

int main() {
    Decrement num(5);

    cout << "Before prefix decrement: ";
    num.display();
    --num;
    cout << "After prefix decrement: ";
    num.display();

    cout << "Before postfix decrement: ";
    num.display();
    num--;
    cout << "After postfix decrement: ";
    num.display();

    return 0;
}//end main