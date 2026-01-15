#include <iostream>
using namespace std;

int main() {
    char str[100];
    int len = 0;

    cout << "Enter a string: ";
    cin >> str;

    while(str[len] != '\0') {
        len++;
    }

    cout << "Length of string is: " << len << endl;
    return 0;
}
