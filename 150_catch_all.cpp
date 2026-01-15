#include <iostream>
using namespace std;

void test(int x) {
    try {
        if(x == 0) throw 10;
        if(x == 1) throw 'a';
        if(x == 2) throw 1.23;
    } catch(...) {
        cout << "Caught an exception (Generic Catch Block)" << endl;
    }
}

int main() {
    test(0);
    test(1);
    test(2);
    return 0;
}
