#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int x, int y) {
        return x + y;
    }

    int subtract(int x, int y);
};

int Calculator::subtract(int x, int y) {
    return x - y;
}

int main() {
    Calculator calc;
    cout << "Addition: " << calc.add(10, 5) << endl;
    cout << "Subtraction: " << calc.subtract(10, 5) << endl;
    return 0;
}
