#include <iostream>

int main() {
    char operation;
    double num1, num2;

    // Input
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform calculation based on the operator
    switch (operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator" << std::endl;
            break;
    }

    return 0;
}

