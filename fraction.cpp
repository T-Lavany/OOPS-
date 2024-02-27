#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

   
    Fraction& operator--() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
        return *this;
    }

    
    void display() const {
        std::cout << numerator << "/" << denominator;
    }
};

int main() {
    int numerator, denominator;

  
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;

    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    
    Fraction fraction(numerator, denominator);


    --fraction;


    std::cout << "The simplified fraction is: ";
    fraction.display();
    std::cout << std::endl;

    return 0;
}

