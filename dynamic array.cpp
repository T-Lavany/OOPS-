#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* dynamicArray = new int[size];
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i * 2;  
    }
    cout << "Values in the dynamic array: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete[] dynamicArray;
    return 0;
}

