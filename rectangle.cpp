#include <iostream>
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {
        std::cout << "Rectangle created with length " << length << " and width " << width << std::endl;
    }
    ~Rectangle() {
        std::cout << "Rectangle destroyed" << std::endl;
    }
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle(4.0, 5.0);
    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;
    return 0;
}

