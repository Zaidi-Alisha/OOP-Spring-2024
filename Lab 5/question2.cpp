#include <iostream>

using namespace std;

class LoanHelper {
private:
    const float interestRate;
    float loanAmount;
    int repaymentMonths;

public:
    //Parameterized constructor
    LoanHelper(float rate, float amount, int months)
        : interestRate(rate), loanAmount(amount), repaymentMonths(months) {}

    //Function for calculating monthly repayment
    float calculateMonthlyRepayment() const {
        float monthlyPayment = loanAmount / repaymentMonths;
        float interest = monthlyPayment * interestRate;
        return monthlyPayment + interest;
    }//end function

    //Getter for repayment months
    int getRepaymentMonths() const {
        return repaymentMonths;
    }
};

int main() {
    float interestRate = 0.005; 
    //Declaring
    float loanAmount = 12000;  
    int repaymentMonths = 12; 

    LoanHelper loanHelper(interestRate, loanAmount, repaymentMonths);

    float monthlyRepayment = loanHelper.calculateMonthlyRepayment();
    int months = loanHelper.getRepaymentMonths();

    cout << "Please pay $" << monthlyRepayment << " every month for " << months << " months to repay your loan." << endl;

    return 0;
}//end main