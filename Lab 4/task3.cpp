/*
*Programmer: Alisha Zaidi
*Date: 15 Feb, 2024
*Topic: Constructors
*/

#include <iostream>
#include <string>
using namespace std;

//Generalized class
class Weekdays {
    private:
    string Days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int CurrentDay;

    public:
    //Default constructor
    Weekdays() {
        CurrentDay = 0;
    }//ending constructor

    //Parameterized constructor
     Weekdays(int day) {
        //Day exists in 0-6 range
        CurrentDay = day % 7; 
    }//ending constructor

    //Function to get the current day
    string getCurrentDay() {
        return Days[CurrentDay];
    }//end function

    //Function to get next day
    string getNextDay() {
        return Days[(CurrentDay + 1) % 7]; // Wrap around to Sunday if necessary
    }//end function
    
    //Function to get previous day
    string getPreviousDay() {
        return Days[(CurrentDay + 6) % 7]; // Wrap around to Saturday if necessary
    }//end function

    //Get any day from today
    string getNthDayFromToday(int n) {
        int futureDay = (CurrentDay + n) % 7; // Calculate future day index
        return Days[futureDay];
    }//end function
};//ending class

int main() {
    Weekdays today(0); 
    //Printing
    cout << "Today is: " << today.getCurrentDay() << endl;
    cout << "Tomorrow is: " << today.getNextDay() << endl;
    cout << "Yesterday was: " << today.getPreviousDay() << endl;
    cout << "20 days from today will be: " << today.getNthDayFromToday(20) << endl;

    return 0;
}//end main
