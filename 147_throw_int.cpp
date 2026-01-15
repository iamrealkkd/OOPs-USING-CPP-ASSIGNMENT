#include <iostream>
using namespace std;

int main() {
    try {
        throw 100;
    } catch(int e) {
        cout << "Caught Integer Exception: " << e << endl;
    }
    return 0;
}
