#include <iostream>
using namespace std;

int main() {
    int i; 

    cout << "Loop demonstrating continue (skip 3):" << endl;
    for(i = 1; i <= 5; i++) {
        if(i == 3) continue;
        cout << i << " ";
    }
    cout << endl;

    cout << "Loop demonstrating break (stop at 3):" << endl;
    for(i = 1; i <= 5; i++) {
        if(i == 3) break;
        cout << i << " ";
    }

    return 0;
}
