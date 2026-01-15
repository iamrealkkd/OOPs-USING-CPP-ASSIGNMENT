#include <iostream>
using namespace std;

int main() {
    int choice;
    float r, l, b, h, base, area;

    cout << "1. Circle\n2. Rectangle\n3. Triangle\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter radius: ";
        cin >> r;
        area = 3.14159 * r * r;
        cout << "Area of Circle: " << area << endl;
    } else if (choice == 2) {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        area = l * b;
        cout << "Area of Rectangle: " << area << endl;
    } else if (choice == 3) {
        cout << "Enter base and height: ";
        cin >> base >> h;
        area = 0.5 * base * h;
        cout << "Area of Triangle: " << area << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
