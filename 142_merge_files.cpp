#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream f1("file1.txt"), f2("file2.txt");
    f1 << "Content of File 1\n"; f1.close();
    f2 << "Content of File 2\n"; f2.close();

    ifstream in1("file1.txt"), in2("file2.txt");
    ofstream out("merged.txt");
    string line;

    if(in1 && in2 && out) {
        while(getline(in1, line)) out << line << endl;
        while(getline(in2, line)) out << line << endl;
        cout << "Files merged into merged.txt" << endl;
    } else {
        cout << "Error opening files." << endl;
    }
    return 0;
}
