#include <iostream>

using namespace std;

int main() {
   int n;
   int i;
   
   cout << "Enter a number: " <<endl;
   cin >> n;
   
   count = 0;
   
   if (n==1){
    cout << "It is not a prime number";
   }//ending if
   
   for (i = 2; i * i <= n; i++) {
    if (n % 1 == 0) count++;
   }//ending for loop
   
   if (count > 2)
   cout << "not prime";
   else
   cout << "prime";
}//end main

