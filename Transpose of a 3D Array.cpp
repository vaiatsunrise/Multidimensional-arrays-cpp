#include <iostream>
using namespace std;

int main() {
    int arr[2][3][2] = {
        { {1, 2}, {3, 4}, {5, 6} },
        { {7, 8}, {9, 10}, {11, 12} }
    };

    int transpose[3][2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 2; k++) {
                transpose[j][i][k] = arr[i][j][k];
            }
        }
    }

    cout << "Transposed 3D array:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << transpose[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
