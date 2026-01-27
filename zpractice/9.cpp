#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accountNumber;
    float balance;
    static int accountCount; // static data member (shared by all objects)

public:
    BankAccount(string n, int accNo, float bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
        accountCount++;
        cout << "Account created for " << name << endl;
    }

    // Inline function to deposit money
    inline void deposit(float amount) {
        balance += amount;
        cout << "Deposited " << amount << " successfully!" << endl;
    }

    // Inline function to withdraw money
    inline void withdraw(float amount) {
        if (amount > balance)
            cout << "Insufficient Balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully!" << endl;
        }
    }

    // Display account info
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    // Static function to show total number of accounts
    static void showTotalAccounts() {
        cout << "\nTotal accounts created: " << accountCount << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account of " << name << " closed.\n";
    }
};

int BankAccount::accountCount = 0;

int main() {
    BankAccount acc1("Bhavneesh", 101, 5000);
    acc1.deposit(1000);
    acc1.withdraw(2000);
    acc1.display();

    BankAccount acc2("Aman", 102, 7000);
    acc2.display();

    BankAccount::showTotalAccounts(); // calling static function

    return 0;
}
