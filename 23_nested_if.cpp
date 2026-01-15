#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Positive Even Number" << endl;
        } else {
            cout << "Positive Odd Number" << endl;
        }
    } else {
        cout << "Number is not positive" << endl;
    }

    return 0;
}
