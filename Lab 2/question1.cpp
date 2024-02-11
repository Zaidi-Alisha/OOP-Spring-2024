/**
 *Programmer: Alisha Zaidi
 *Date: 10 February, 2024
*/

#include <iostream>
using namespace std;

//Making function to swap
int recursiveSwap(int& a, int& b) {
    if (a == b) 
        return;

    
    int temp = a;
    a = b;
    b = temp;

    
    recursiveSwap(a, b);
}//ending function

int main() {
    int x = 4;
    int y = 5;

    cout << "Before swapping: x = " << x << ", y = " << y <<endl;
    recursiveSwap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y <<endl;

    return 0;
}//end main

