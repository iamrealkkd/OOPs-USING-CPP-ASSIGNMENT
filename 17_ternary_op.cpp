#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    max = (a > b) ? a : b;

    cout << "Maximum number is: " << max << endl;
    return 0;
}
