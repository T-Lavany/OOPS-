#include <iostream>

class StudentMarks {
private:
    static const int numSubjects = 3;
    static const int maxMarks = 100;
    int marks[numSubjects];

public:
    friend std::istream& operator>>(std::istream& input, StudentMarks& student) {
        for (int i = 0; i < student.numSubjects; ++i) {
            do {
                std::cout << "Enter marks for subject " << i + 1 << ": ";
                input >> student.marks[i];

                if (student.marks[i] < 0 || student.marks[i] > student.maxMarks) {
                    std::cout << "Wrong input for mark, enter once again." << std::endl;
                }
            } while (student.marks[i] < 0 || student.marks[i] > student.maxMarks);
        }
        return input;
    }

    double calculateAverage() const {
        double sum = 0;
        for (int i = 0; i < numSubjects; ++i) {
            sum += marks[i];
        }
        return sum / numSubjects;
    }
};

int main() {
    StudentMarks student;

    
    std::cin >> student;

    
    std::cout << "Avg mark is " << student.calculateAverage() << std::endl;

    return 0;
}

