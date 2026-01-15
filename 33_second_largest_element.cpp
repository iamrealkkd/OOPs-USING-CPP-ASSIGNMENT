#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, largest, second;

    cout << "Enter number of elements (>2): ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second largest element is: " << second << endl;
    return 0;
}
