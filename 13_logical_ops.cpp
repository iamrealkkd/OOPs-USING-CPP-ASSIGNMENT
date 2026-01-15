#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 0;

    if (a && b) cout << "Both are true" << endl;
    else cout << "At least one is false" << endl;

    if (a || b) cout << "At least one is true" << endl;

    if (!b) cout << "b is false (zero)" << endl;

    return 0;
}
