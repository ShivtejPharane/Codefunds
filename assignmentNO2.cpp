#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder; 
    int accountNumber;    
    string accountType;   
    double balance;       

public:
    BankAccount() {
        accountHolder = "Unknown";
        accountNumber = 0;
        accountType = "Savings";
        balance = 0.0;
    }
    BankAccount(string holder, int number, string type, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    string getAccountType() const {
        return accountType;
    }

    double getBalance() const {
        return balance;
    }

    void setAccountType(string newType) {
        accountType = newType;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << " | New Balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << " | New Balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid withdrawal amount!" << endl;
        }
    }

    void displayAccountDetails() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
        cout << "-------------------------------" << endl;
    }
};

int main() {
    
    BankAccount account1; // Using default constructor
    BankAccount account2("Alice", 12345, "Current", 1500.50); // Using parameterized constructor

    
    cout << "Account 1 (Default Constructor) Details: " << endl;
    account1.displayAccountDetails();

    cout << "Account 2 (Parameterized Constructor) Details: " << endl;
    account2.displayAccountDetails();

    
    cout << "Depositing $500 into Account 1..." << endl;
    account1.deposit(500);

    cout << "Withdrawing $200 from Account 2..." << endl;
    account2.withdraw(200);

    cout << "Changing Account 1's type to 'Current'..." << endl;
    account1.setAccountType("Current");

    cout << "Account 1 (after modification) Details: " << endl;
    account1.displayAccountDetails();

    
    cout << "Final Account 1 Details: " << endl;
    account1.displayAccountDetails();

    cout << "Final Account 2 Details: " << endl;
    account2.displayAccountDetails();

    return 0;
}

