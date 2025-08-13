#include <iostream>
using namespace std;

int main() {
    int arr[2][2][2] = {
        { {1, 2}, {3, 4} },
        { {5, 6}, {7, 8} }
    };

    int sum = 0;
    for(int i = 0; i < 2; i++) {
        sum += arr[i][i][i]; // Main diagonal (i, i, i)
    }

    cout << "Sum of main diagonal elements: " << sum << endl;
    return 0;
}
