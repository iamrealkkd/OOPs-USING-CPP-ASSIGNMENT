#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3, x = 4;
    int result;

    result = (a * x * x) + (b * x) + 5;

    cout << "Result of " << a << "x^2 + " << b << "x + 5 where x=" << x << " is: " << result << endl;
    return 0;
}
