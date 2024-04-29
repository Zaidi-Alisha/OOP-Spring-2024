//Alisha Zaidi 23k-0025

#include <iostream>
using namespace std;
class Appointment {
private:
    
    string clientName;
    double cost;

    static int totalAppointments;
    static int totalEarnings;

public:
   
    Appointment(string name, int price) : clientName(name), cost(price) {
        
        totalAppointments++;
        totalEarnings +=price;
    }

   
    static double averageCost() {
        if (totalAppointments == 0)
            return 0;
        else
            return totalEarnings / totalAppointments;
    }

   
   string getName() {
        return clientName;
    }

    int getCost()  {
        return cost;
    }
};


int Appointment::totalAppointments = 0;
int Appointment::totalEarnings = 0;

int main() {
    
    Appointment appointment1("Alisha", 15000);
    Appointment appointment2("Layyana", 5000);
    Appointment appointment3("Amna", 7000);

    
    double averageCost = Appointment::averageCost();

   
   cout << "Appointments:\n";
    cout << "1. Client Name: " << appointment1.getName() << ", Cost: Rs" << appointment1.getCost() <<endl;
   cout << "2. Client Name: " << appointment2.getName() << ", Cost: Rs" << appointment2.getCost() << endl;
    cout << "3. Client Name: " << appointment3.getName() << ", Cost: Rs" << appointment3.getCost() <<endl;

    cout << "Average cost of appointments: Rs" << averageCost <<endl;

    return 0;
}//end main