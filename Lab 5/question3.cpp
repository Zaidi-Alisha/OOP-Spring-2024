#include <iostream>
#include <string>

using namespace std;

class ValidateString {
private:
    string str;

public:
    //Parameterized constructor
    ValidateString(const string& s) : str(s) {}

   //Checking if all the characters are alphabets

  //Constant function to check if the string contains only alphabetic characters
  //We make the function constant so that it doesn't modify the object's state. It can be called on constant objects and provides a guarantee that the function won't change the object's internal state.
    bool isValid() const {
        for (char c : str) {
            if (!isalpha(c)) {
                return false;
            }//end if
        }//end for
        return true;
    }//end function 
};

int main() {
    //Create objects 
    ValidateString validStr("Valid");
    ValidateString invalidStr("Invalid1234");

    //Check if the strings are valid
    cout << "Is 'Valid' valid? " << (validStr.isValid() ? "Yes" : "No") << endl;
    cout << "Is 'Invalid123' valid? " << (invalidStr.isValid() ? "Yes" : "No") << endl;

    return 0;
}//end main