#include<iostream>
using namespace std;
class OOPCONS {
private:
    int data;

public:
    // Default Constructor
    OOPCONS() {
        data = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    OOPCONS(int value) {
        data = value;
        cout << "Parameterized Constructor Called with value: " << value << endl;
    }

    // Copy Constructor
    OOPCONS(const OOPCONS &other) {
        data = other.data;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display data
    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Using Default Constructor
    OOPCONS obj1;
    obj1.displayData();

    // Using Parameterized Constructor
    OOPCONS obj2(42);
    obj2.displayData();

    // Using Copy Constructor
    OOPCONS obj3 = obj2;
    obj3.displayData();

    return 0;
}