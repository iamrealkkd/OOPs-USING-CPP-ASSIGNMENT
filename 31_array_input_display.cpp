#include <iostream>
using namespace std;

int main() {
    int arr[5], i;

    cout << "Enter 5 integers: ";
    for(i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
