#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, max;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Largest element is: " << max << endl;
    return 0;
}
