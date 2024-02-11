/**
 *Programmer: Alisha Zaidi
 *Date: 10 February, 2024
*/

#include <iostream>
using namespace std;

//Finding GCD of two numbers 
int calculateGCD(int x, int y) {
    if (y == 0) {
        return x;
      }//ending if
    else
        return calculateGCD(y, x % y);
}//ending function

//Finding LCM of two numbers 
int calculateLCM(int x, int y) {
    return (x * y) / calculateGCD(x, y);
}//ending function

int main() {
    int a, b;

    cout << "Enter two positive integers: ";
    cin >> a >> b  << endl;

    cout << "GCD of " << a << " and " << b << " is: " << calculateGCD(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is: " << calculateLCM(a, b) << endl;

    return 0;
}//end main