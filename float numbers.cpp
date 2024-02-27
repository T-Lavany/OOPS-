#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter the first floating number: ";
    cin >> num1;
    cout << "Enter the second floating number: ";
    cin >> num2;
    float additionResult = num1+num2;
    float subtractionResult = num1-num2;
    float multiplicationResult = num1*num2;
    if (num2 != 0) {
        float divisionResult = num1/num2;
        cout << "Division result: " << divisionResult << endl;
    } else {
        cout << "Invalid." << endl;
    }
    if (num2 != 0) {
        int moduloResult = static_cast<int>(num1) % static_cast<int>(num2);
        cout << "Modulo result: " << moduloResult << endl;
    } else {
        cout << "Invalid." << endl;
    }
    cout << "Addition result: " << additionResult << endl;
    cout << "Subtraction result: " << subtractionResult << endl;
    cout << "Multiplication result: " << multiplicationResult << endl;

    return 0;
}

