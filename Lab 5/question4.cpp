#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    private:
    int accountNumber;
    string accountHolderName;
    double balance;

    public:
    //Parameterized Constructor
    BankAccount (int accountNumber, string accountHolderName, double balance) {
        this-> accountNumber = accountNumber;
        this-> accountHolderName = accountHolderName;
        this-> balance = balance = 0.0;
    }//ending parameterized constructor

    //Deposit function
    void deposit(double amount) {
        balance += amount; //Updating the balance
        cout << "The new balance is: $ " << balance << endl;
    }//end function

    //Withdraw function
    void withdraw(double amount) {
        if (balance > amount) {
        double newbal = balance - amount; //Updating the balance
        cout << "Withdrawal successful. The new balance is: $ " << newbal << endl;
        }//end if
        else if (balance < amount) {
             cout << "Withdrawal unsuccessful. Balance is insufficient " << endl;
        }//end elseif
    }//end function

    void display() {
        cout << "Your account number is: " << accountNumber <<endl;
        cout << "Your account holder name is: " << accountHolderName <<endl;
        cout << "Your balance is: " << balance <<endl;
    }//end function

};//ending class

int main () {
    BankAccount accounts[3] = {
        BankAccount(123243, "Alisha Zaidi", 3245.34),
        BankAccount(145443, "Layyana Junaid", 5645.34),
        BankAccount(126546, "Amna", 1285.34),
    };

    //Display initial account details
    for (int i = 0; i < 3; i++) {
        cout << "Account: " << i + 1 << "Details:" << endl;
        accounts[i].display();
    }//end for loop

    //Perform deposit and withdrawal functions
    accounts[1].deposit(7438);
    accounts[1].withdraw(6456);
    accounts[1].display();
   
    accounts[2].deposit(2344);
    accounts[2].withdraw(64234);
    accounts[2].display();
   
    accounts[0].deposit(343);
    accounts[0].withdraw(1324);
    accounts[0].display();
   
   

    return 0;
}//end main
