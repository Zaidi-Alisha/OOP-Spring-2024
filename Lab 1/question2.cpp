#include <iostream>

using namespace std;

int main() {
   int maths;
   int english;
   int sci;
   int students;
   
   cout << "Enter the number of students: " <<endl;
   cin >> students;
   
for (i = 0; i < students; i++) {

   
   cout << "Enter the marks for English: " <<endl;
   cin >> english;
   
   cout << "Enter the marks for Mathematics: " <<endl;
   cin >> maths;
   
   cout << "Enter the marks for Science: " <<endl;
   cin >> sci;
   
   
   int sum = maths + english + sci;
   int average = sum / 3;
   
   
   if (average > 100 || average < 0){
    cout << "This is incorrect and please recheck the marks you have entered";
   }
   
   else if (average < 100 && average >= 90){
    cout << "Grade is A" <<endl;
   }
   
   else if (average < 90 && average >= 80){
    cout << "Grade is B"<<endl;
   }
   
    else if (average < 80 && average >= 70){
    cout << "Grade is C" <<endl;
   }
   
      else if (average < 70 && average >= 60){
    cout << "Grade is D" <<endl;
   }
   
      else if (average < 60){
    cout << "Grade is F" <<endl;
   }
   
   cout << "The total marks are: "<<sum <<endl;
   cout << "The average is: " <<average <<endl;

}//for loop
}//end main