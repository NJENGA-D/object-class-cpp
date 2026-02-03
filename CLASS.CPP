#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    // Constructor
    Student(string n, int a, float g) {
        name = n;
        age = a;
        gpa = g;
    }

    // Setter methods
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setGPA(float g) {
        gpa = g;
    }

    // Getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    float getGPA() {
        return gpa;
    }

    // Display function
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s1("DOUGLAS NJENGA", 24, 5.8);
    s1.displayInfo();

    return 0;
}
