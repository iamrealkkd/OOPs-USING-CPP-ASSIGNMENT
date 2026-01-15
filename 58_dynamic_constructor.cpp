#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;
public:
    Array(int s) {
        size = s;
        arr = new int[size];
        cout << "Memory allocated for array of size " << size << endl;
    }

    ~Array() {
        delete[] arr;
        cout << "Memory deallocated" << endl;
    }
};

int main() {
    Array a(5);
    return 0;
}
