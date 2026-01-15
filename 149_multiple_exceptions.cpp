#include <iostream>
using namespace std;

void test(int x) {
    try {
        if(x == 1) throw 1;
        else if(x == 2) throw 'A';
        else if(x == 3) throw 1.5;
    } catch(int e) {
        cout << "Caught Integer: " << e << endl;
    } catch(char e) {
        cout << "Caught Character: " << e << endl;
    } catch(double e) {
        cout << "Caught Double: " << e << endl;
    }
}

int main() {
    test(1);
    test(2);
    test(3);
    return 0;
}
