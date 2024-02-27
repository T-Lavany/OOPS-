#include <iostream>

class Employee {
public:
    virtual double calculatePay() const {
        return 0.0; 
    }
};

class Manager : public Employee {
private:
    double salary;

public:
    Manager(double baseSalary) : salary(baseSalary) {}

    
    double calculatePay() const override {
        
        return salary;
    }
};

class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    
    
    double calculatePay() const override {
        
        return hourlyRate * hoursWorked;
    }
};

int main() {
    
    Manager manager(5000.0);
    Engineer engineer(20.0, 40);

   
    std::cout << "Manager's Monthly Pay: $" << manager.calculatePay() << std::endl;
    std::cout << "Engineer's Weekly Pay: $" << engineer.calculatePay() << std::endl;

    return 0;
}

