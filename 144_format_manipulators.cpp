#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.456789;

    cout << "Default: " << num << endl;
    cout << "Setprecision(4): " << setprecision(4) << num << endl;
    cout << "Fixed: " << fixed << num << endl;
    cout << "Scientific: " << scientific << num << endl;
    cout << "Setw(20): |" << setw(20) << "Right Aligned" << "|" << endl;
    cout << "Setfill('*'): |" << setw(20) << setfill('*') << "Filled" << "|" << endl;

    return 0;
}
