#include <iostream>

class FactorialCalculator {
private:
    int number;

public:
   
    FactorialCalculator(int num) {
        number = num;
    }

    
    long long calculateFactorial() {
        long long result = 1;
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
        return result;
    }

    
    
    bool isValidInput() {
        return number >= 0;
    }
};

int main() {
   
    int userInput;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> userInput;

    
    FactorialCalculator calculator(userInput);

   
    if (calculator.isValidInput()) {
      
        std::cout << "Factorial of " << userInput << " is: " << calculator.calculateFactorial() << std::endl;
    } else {

        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    }

    return 0;
}

