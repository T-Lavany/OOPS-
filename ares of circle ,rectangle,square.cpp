#include <iostream>
#include <cmath>
using namespace std;
double calculateSquareArea(double side) {
    return side * side;
}
double calculateRectangleArea(double length, double width) {
    return length * width;
}
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}
int main() {
    char choice;   
    do {
        cout << "Choose a shape to calculate area:\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Circle\n";
        int option;
        cout << "Enter your choice (1-3): ";
        cin >> option;
        switch(option) {
            case 1:
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
                
            case 2:
                double length, width;
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;

            case 3:
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "Area of the circle: " << calculateCircleArea(radius) << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 3.\n";
        }

        cout << "Do you want to calculate the area of another shape? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

