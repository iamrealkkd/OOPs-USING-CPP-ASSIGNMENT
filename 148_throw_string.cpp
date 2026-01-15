#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        throw string("Something went wrong!");
    } catch(string e) {
        cout << "Caught String Exception: " << e << endl;
    }
    return 0;
}
