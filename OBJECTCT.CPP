#include <iostream>
using namespace std;

// Define a class
class Person {
public:
    string name;
    int age;
    int year;
    string gender;

    // Function to display details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Year: " << year << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    // Create an object
    Person person1;

    // Assign values
    person1.name = "DOUGLAS NJENGA";
    person1.age = 24;
    person1.year = 2026;
    person1.gender = "MALE";

    // Display object details
    person1.displayDetails();

    return 0;
}