#include <iostream>
#include <fstream>
using namespace std;

int main() {

    cout << "Standard Output Stream (ostream)" << endl;
    cerr << "Standard Error Stream (ostream)" << endl;
    clog << "Standard Log Stream (ostream)" << endl;

    ofstream file("hierarchy.txt");
    if(file.good()) { 
        file << "File Stream (ofstream inherits ostream)" << endl;
        file.close();
    }

    return 0;
}
