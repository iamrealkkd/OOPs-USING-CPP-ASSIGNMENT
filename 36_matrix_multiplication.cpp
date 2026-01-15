#include <iostream>
using namespace std;

int main() {
    int mat1[3][3], mat2[3][3], res[3][3];
    int r = 3, c = 3, i, j, k;

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            cin >> mat1[i][j];

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            cin >> mat2[i][j];

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            res[i][j] = 0;

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            for(k = 0; k < 3; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Product Matrix:" << endl;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
