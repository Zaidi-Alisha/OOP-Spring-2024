/*Alisha Zaidi
 *23k-0025
 */

#include <iostream>
#include <string>

using namespace std;

//General class
class Calendar {
private:
    string months[12];
    string tasks[12][31];
    int currentYear;

public:
    //Parameterized constructor
    Calendar(int year) {
        currentYear = year;
    }

   //Function to add task
    void addTask(int month, int day, const string& taskDetails) {
        if (month < 1 || month > 12 || day < 1 || day > 31) {
            cout << "Invalid month or day." << endl;
            return;
        }//end if
        tasks[month - 1][day - 1] = taskDetails;
    }//end function

    //function to remove task
    void removeTask(int month, int day) {
        if (month < 1 || month > 12 || day < 1 || day > 31) {
            cout << "Invalid month or day." << endl;
            return;
        }//end if
        tasks[month - 1][day - 1] = "";
    }//end function

    //function to display task
    void displayTasks() {
    cout << "Tasks for the year " << currentYear << ":" << endl;
    //for 1
    for (int month = 0; month < 12; ++month) {
        cout << "Month " << (month + 1) << ":" << endl;
        //for 2
        for (int day = 0; day < 31; ++day) {
            if (tasks[month][day] != "") {
                cout << "Day " << (day + 1) << ": " << tasks[month][day] << endl;
            }//end if
        }//end for loop 2
    }//end for loop 1
}//end function

};//end class

int main() {
    Calendar calendar(2024);

    //Adding tasks
    calendar.addTask(1, 10, "Run");
    calendar.addTask(2, 15, "Make food");
    calendar.addTask(3, 20, "Watch cricket");
    calendar.addTask(4, 25, "Swimming class");
    calendar.addTask(5, 1, "Tabletennis match");

    //Displaying tasks
    cout << "Tasks before removal:" << endl;
    calendar.displayTasks();

    //Removing a task
    calendar.removeTask(2, 15);

    //Displaying tasks after removing them
    cout << "\nTasks after removal:" << endl;
    calendar.displayTasks();

    return 0;
}//end main
