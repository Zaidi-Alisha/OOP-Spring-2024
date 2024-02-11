/**
 *Programmer: Alisha Zaidi
 *Date: 10 February, 2024
*/

#include <iostream>
#include <string>

using namespace std;

//Making struct for register
struct Register {
int courseId;
string courseName;
};

//Making struct for Student
struct Student : Register {
int studentId;
string FirstName;
string LastName;
int CellNo;
string email;
};


int main() {
//Creating array
Student students[5];
   
//Taking input for students
    for (int i = 0; i < 5; i++) {
        cout << "Enter data for Student: " << i + 1;

        cout << "Course ID: " <<endl;
        cin >> students[i].courseId;

        cout << "Course Name: " <<endl;
        getline(cin, students[i].courseName);

        cout << "Student ID: " <<endl;
        cin >> students[i].studentId;

        cout << "First Name: " <<endl;
        cin >> students[i].FirstName;

        cout << "Last Name: " <<endl;
        cin >> students[i].LastName;

        cout << "Cell Number: " <<endl;
        cin >> students[i].CellNo;

        cout << "Email: " <<endl;
        cin >> students[i].email;
    }//end for loop

// Displaying the data
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i + 1;
       
        cout << "Course ID is: " << students[i].courseId << endl;
       
        cout << "Course Name is: " << students[i].courseName << endl;
       
        cout << "Student ID is: " << students[i].studentId << endl;
       
        cout << "First Name of student is: " << students[i].FirstName << endl;
       
        cout << "Last Name of student is: " << students[i].LastName << endl;
   
        cout << "Cell Number is: " << students[i].CellNo << endl;
       
        cout << "Email address is: " << students[i].email << endl;
       
    }//ending second for loop

}//end main