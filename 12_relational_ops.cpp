#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << "a = " << a << ", b = " << b << endl;

    if (a > b) cout << "a is greater than b" << endl;
    if (b < a) cout << "b is less than a" << endl;
    if (a == b) cout << "a is equal to b" << endl;
    if (a != b) cout << "a is not equal to b" << endl;
    if (a >= b) cout << "a is greater than or equal to b" << endl;
    if (b <= a) cout << "b is less than or equal to a" << endl;

    return 0;
}
