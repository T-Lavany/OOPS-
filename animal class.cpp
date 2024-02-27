#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(const string& _name, const string& _species, int _age)
        : name(_name), species(_species), age(_age) {}
    string getName() const {
        return name;
    }

    string getSpecies() const {
        return species;
    }

    int getAge() const {
        return age;
    }
    void setName(const string& _name) {
        name = _name;
    }

    void setSpecies(const string& _species) {
        species = _species;
    }
    void setAge(int _age) {
        age = _age;
    }
};
class Cat : public Animal {
private:
    string color;
    string breed;
public:
    Cat(const string& _name, const string& _species, int _age,
        const string& _color, const string& _breed)
        : Animal(_name, _species, _age), color(_color), breed(_breed) {}
    string getColor() const {
        return color;
    }
    string getBreed() const {
        return breed;
    }
    void setColor(const string& _color) {
        color = _color;
    }
    void setBreed(const string& _breed) {
        breed = _breed;
    }
};
class Dog : public Animal {
private:
    double weight;
    string breed;
public:
    Dog(const string& _name, const string& _species, int _age,
        double _weight, const string& _breed)
        : Animal(_name, _species, _age), weight(_weight), breed(_breed) {}
    double getWeight() const {
        return weight;
    }
    string getBreed() const {
        return breed;
    }
    void setWeight(double _weight) {
        weight = _weight;
    }
    void setBreed(const string& _breed) {
        breed = _breed;
    }
};
int main() {
    Cat myCat("Whiskers", "Felis catus", 3, "Gray", "Siamese");
    Dog myDog("Buddy", "shiezu", 5, 25.5, "Labrador");
    cout << "Cat Information:" << endl;
    cout << "Name: " << myCat.getName() << endl;
    cout << "Species: " << myCat.getSpecies() << endl;
    cout << "Age: " << myCat.getAge() << endl;
    cout << "Color: " << myCat.getColor() << endl;
    cout << "Breed: " << myCat.getBreed() << endl;
    cout << "\nDog Information:" << endl;
    cout << "Name: " << myDog.getName() << endl;
    cout << "Species: " << myDog.getSpecies() << endl;
    cout << "Age: " << myDog.getAge() << endl;
    cout << "Weight: " << myDog.getWeight() << " kg" << endl;
    cout << "Breed: " << myDog.getBreed() << endl;
    return 0;
}

