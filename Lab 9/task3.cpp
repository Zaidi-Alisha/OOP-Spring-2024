//Alisha Zaidi 23k-0025

#include <iostream>
#include <string>

using namespace std;


class Employee {
protected:
    int employeeID;
    string employeeName;

public:
    Employee(int id, const string& name) : employeeID(id), employeeName(name) {}

    virtual double calculatePay() const {
        return 0.0; 
    }

    virtual void displayDetails() const {
        cout << "Employee ID: " << employeeID << ", Name: " << employeeName;
    }
};

//Derived class FullTimeEmployee
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
    FullTimeEmployee(int id, const string& name, double salary)
        : Employee(id, name), monthlySalary(salary) {}

    double calculatePay() const override {
        return monthlySalary;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << ", Type: Full-time, Monthly Salary: $" << monthlySalary << endl;
    }
};


class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    int hoursWorked;

public:
    PartTimeEmployee(int id, const string& name, double wage, int hours)
        : Employee(id, name), hourlyWage(wage), hoursWorked(hours) {}

    double calculatePay() const override {
        return hourlyWage * hoursWorked;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << ", Type: Part-time, Hourly Wage: $" << hourlyWage
             << ", Hours Worked: " << hoursWorked << endl;
    }
};

int main() {
    //Creating instances 
    FullTimeEmployee fullTimeEmp(101, "AAA", 5000);
    PartTimeEmployee partTimeEmp(102, "BBB", 15, 40);

    // Displaying details 
    cout << "Displaying Details:" << endl;
    fullTimeEmp.displayDetails();
    partTimeEmp.displayDetails();
    cout << endl;

    //Calculating and displaying pay 
    cout << "Calculating Pay:" << endl;
    cout << "Full-time Employee Pay: $" << fullTimeEmp.calculatePay() << endl;
    cout << "Part-time Employee Pay: $" << partTimeEmp.calculatePay() << endl;
    cout << endl;

    
    Employee* emp = &fullTimeEmp;
    cout << "Using base class pointer to calculate Full-time Employee Pay: $" << emp->calculatePay() << endl;

    return 0;
}//end main
