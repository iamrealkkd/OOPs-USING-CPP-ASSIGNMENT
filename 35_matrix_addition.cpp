#include <iostream>
using namespace std;

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3];
    int r = 3, c = 3, i, j;

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
            sum[i][j] = mat1[i][j] + mat2[i][j];

    cout << "Sum Matrix:" << endl;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
