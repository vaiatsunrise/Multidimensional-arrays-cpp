#include <iostream>
using namespace std;

int main() {
    int arr[2][2][2] = {
        { {1, 2}, {3, 4} },
        { {1, 5}, {3, 8} }
    };

    cout << "Comparing first row and second row:\n";
    for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 2; k++) {
            if(arr[0][j][k] == arr[1][j][k]) {
                cout << "Position [" << j << "][" << k << "]: Equal (" << arr[0][j][k] << ")\n";
            } else {
                cout << "Position [" << j << "][" << k << "]: Not Equal (" << arr[0][j][k] 
                     << " vs " << arr[1][j][k] << ")\n";
            }
        }
    }
    return 0;
}
