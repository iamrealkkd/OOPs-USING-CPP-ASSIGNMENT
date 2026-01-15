#include <iostream>
using namespace std;

int main() {
    int num = 10;
    double d = 5.5;

    double result = num + d;
    cout << "Implicit conversion result: " << result << endl;

    int i = (int)d;
    cout << "Explicit conversion of double to int: " << i << endl;

    return 0;
}
