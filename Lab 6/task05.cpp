//Alisha Zaidi 23k-0025

#include <iostream>
using namespace std;
class Course {
private:
    string courseCode;
    string courseName;
    int creditHours;

public:
    
    Course(string code, string name, int hours) : courseCode(code), courseName(name), creditHours(hours) {}

    
    string getCourseCode() { 
	return courseCode; }
   
   string getCourseName() { 
   return courseName; }
   
    int getCreditHours()  {
	 return creditHours; }
};

class Student {
private:
    string studentID;
    string studentName;
    Course* enrolledCourses[10]; 
    int numCourses;

public:
    
    Student(string id, string name) : studentID(id), studentName(name), numCourses(0) {}

    
    void enroll(Course& course) {
        if (numCourses < 10) {
            enrolledCourses[numCourses++] = new Course(course);
        } else {
           cout << "Maximum courses limit reached!" << std::endl;
        }
    }

    
    void drop( Course& course) {
        for (int i = 0; i < numCourses; ++i) {
            if (enrolledCourses[i]->getCourseCode() == course.getCourseCode()) {
                delete enrolledCourses[i];
                for (int j = i; j < numCourses - 1; ++j) {
                    enrolledCourses[j] = enrolledCourses[j + 1];
                }
                numCourses--;
                break;
            }
        }
    }

   
    int getTotalCreditHours()  {
        int totalHours = 0;
        for (int i = 0; i < numCourses; ++i) {
            totalHours += enrolledCourses[i]->getCreditHours();
        }
        return totalHours;
    }

    
    void printEnrolledCourses() const {
        std::cout << "Enrolled Courses for Student" << studentID << " - " << studentName << ":" << endl;
        for (int i = 0; i < numCourses; ++i) {
           cout << "Course Code: " << enrolledCourses[i]->getCourseCode() << ", Name: " << enrolledCourses[i]->getCourseName() << ", Credit Hours: " << enrolledCourses[i]->getCreditHours() <<endl;
        }
    }

   
    ~Student() {
        for (int i = 0; i < numCourses; ++i) {
            delete enrolledCourses[i];
        }
    }
};

int main() {
   
    Course c1("CSC101", "OOP", 3);
    Course c2("MAT110", "MVC", 4);
    Course c3("ENG102", "EW", 3);

    
    Student student("23k-0025", "Alisha Zaidi");

    // Enroll student in courses
    student.enroll(c1);
    student.enroll(c2);

    
    student.printEnrolledCourses();
    cout << "Total Credit Hours: " << student.getTotalCreditHours() << endl;

    // Drop a course
    student.drop(c2);

    
    student.printEnrolledCourses();
    cout << "Total Credit Hours: " << student.getTotalCreditHours() << endl;

    return 0;
}//end main

