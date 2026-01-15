#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ofstream f("source.txt");
    f << "Line 1\nLine 2\nLine 3\nLine 4";
    f.close();

    ifstream in("source.txt");
    ofstream out1("part1.txt"), out2("part2.txt");
    string line;
    int count = 0;

    while(getline(in, line)) {
        count++;
        if(count <= 2) {
            out1 << line << endl;
        } else {
            out2 << line << endl;
        }
    }

    cout << "File split into part1.txt and part2.txt" << endl;
    return 0;
}
