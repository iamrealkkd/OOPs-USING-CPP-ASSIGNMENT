#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.id = 101;
    s1.name = "John";

    s1.display();
    return 0;
}
