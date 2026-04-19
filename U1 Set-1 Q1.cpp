/*Q1. Class, Objects, and Encapsulation
Write a C++ program to create a class Employee with the following details:
•	Employee ID
•	Employee Name
•	Basic Salary */
#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    float basicSalary, grossSalary;

public:
    void read() {
        cout << "Enter ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculate() {
        grossSalary = basicSalary + (0.2 * basicSalary) + (0.1 * basicSalary);
    }

    void display() {
        cout << "\nID: " << empId;
        cout << "\nName: " << empName;
        cout << "\nGross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee e1, e2;

    cout << "\nEnter details for Employee 1\n";
    e1.read();
    e1.calculate();

    cout << "\nEnter details for Employee 2\n";
    e2.read();
    e2.calculate();

    cout << "\nEmployee Details:\n";
    e1.display();
    e2.display();

    return 0;
}