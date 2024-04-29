//23K-0025 Alisha Zaidi

#include <iostream>
#include <cstring>

using namespace std;

class BankAccount {
private:
    int accountId;
    double balance;
    int* transactionHistory;
    int numTransactions;

public:
    // Constructor
    BankAccount(int id, double initialBalance, int* transactions, int numTrans) 
        : accountId(id), balance(initialBalance), numTransactions(numTrans) {
        // Allocate memory for transaction history
        transactionHistory = new int[numTransactions];
        // Copy transaction history
        memcpy(transactionHistory, transactions, numTransactions * sizeof(int));
    }

    // Copy Constructor
    BankAccount(const BankAccount& other) 
        : accountId(other.accountId), balance(other.balance), numTransactions(other.numTransactions) {
        // Allocate memory for transaction history
        transactionHistory = new int[numTransactions];
        // Copy transaction history
        memcpy(transactionHistory, other.transactionHistory, numTransactions * sizeof(int));
    }

    // Destructor
    ~BankAccount() {
        delete[] transactionHistory;
    }

    // Display function
    void display() {
        cout << "Account ID: " << accountId << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction History: ";
        for (int i = 0; i < numTransactions; ++i) {
            cout << transactionHistory[i] << " ";
        }
        cout << endl;
    }

    // Update transaction history function
    void updateTransactionHistory(int* newTransactions, int newNumTransactions) {
        // Delete existing transaction history
        delete[] transactionHistory;
        // Allocate memory for new transaction history
        transactionHistory = new int[newNumTransactions];
        // Copy new transaction history
        memcpy(transactionHistory, newTransactions, newNumTransactions * sizeof(int));
        // Update number of transactions
        numTransactions = newNumTransactions;
    }
};

int main() {
    // Initial transaction history
    int initialTransactions[] = {100, -50, 200, -100};
    int numInitialTransactions = sizeof(initialTransactions) / sizeof(int);

    // Create a BankAccount object
    BankAccount account1(123456, 1000.0, initialTransactions, numInitialTransactions);

    // Create a copy of the original account
    BankAccount account2 = account1;

    // Display details of both accounts
    cout << "Original Account Details:" << endl;
    account1.display();
    cout << endl;

    cout << "Copied Account Details:" << endl;
    account2.display();
    cout << endl;

    // Update transaction history of the original account
    int newTransactions[] = {300, -200};
    int numNewTransactions = sizeof(newTransactions) / sizeof(int);
    account1.updateTransactionHistory(newTransactions, numNewTransactions);

    // Display details of the original account after update
    cout << "Original Account Details after update:" << endl;
    account1.display();
    
    return 0;
}//end main
