#include <iostream>
#include <sstream>
bool isValidNumber(const std::string& input) {
    std::istringstream iss(input);
    double number;
    iss >> number;
    return !iss.fail() && iss.eof();
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if (isValidNumber(input)) {
        std::cout << "Valid number." << std::endl;
    } else {
        std::cout << "Invalid number." << std::endl;
    }

    return 0;
}

