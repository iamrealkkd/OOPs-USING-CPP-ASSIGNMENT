#include <iostream>
using namespace std;

int main() {
    int x = -1;

    cout << "Before try block" << endl;
    try {
        if(x < 0) {
            throw x;
        }
        cout << "After throw (never executed)" << endl;
    } catch(int e) {
        cout << "Exception Caught: " << e << endl;
    }
    cout << "After catch block" << endl;
    return 0;
}
