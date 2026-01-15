#include <iostream>
using namespace std;

int main() {
    float c, f;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    f = (c * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit: " << f << endl;
    return 0;
}
