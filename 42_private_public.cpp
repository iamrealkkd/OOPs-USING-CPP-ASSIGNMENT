#include <iostream>
using namespace std;

class Demo {
private:
    int a;
public:
    int b;

    void setData(int val) {
        a = val;
    }

    void display() {
        cout << "Private a: " << a << ", Public b: " << b << endl;
    }
};

int main() {
    Demo d;
    d.setData(10);
    d.b = 20;
    d.display();

    return 0;
}
