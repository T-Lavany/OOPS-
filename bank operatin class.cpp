#include <iostream>
#include <iomanip>

class BankAccount {
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(const std::string& name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    void displayAccountInfo() {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }
};

int main() {
    
    BankAccount myAccount("John Doe", 123456, 1000.0);

    
    myAccount.displayAccountInfo();

    
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    
    myAccount.displayAccountInfo();

    return 0;
}

