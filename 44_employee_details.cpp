#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    void getDetails() {
        cout << "Enter ID: "; cin >> id;
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Salary: "; cin >> salary;
    }

    void putDetails() {
        cout << "ID: " << id << "\nName: " << name << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.getDetails();
    cout << "\nEmployee Details:\n";
    emp.putDetails();
    return 0;
}
