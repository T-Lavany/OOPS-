#include <iostream>

class Vehicle {
public:
    
    virtual void drive() const {
        std::cout << "Vehicle is being driven." << std::endl;
    }
};

class Car : public Vehicle {
public:
    
    void drive() const override {
        std::cout << "Car is being driven." << std::endl;
    }
};

class Truck : public Vehicle {
public:
    
    void drive() const override {
        std::cout << "Truck is being driven." << std::endl;
    }
};

int main() {
    
    Car myCar;
    Truck myTruck;

    
    std::cout << "Calling drive() for Car:" << std::endl;
    myCar.drive();

    std::cout << "\nCalling drive() for Truck:" << std::endl;
    myTruck.drive();

    return 0;
}

