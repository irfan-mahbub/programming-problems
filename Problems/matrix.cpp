#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix(3, vector<int>(3, 0));
    // for (int r = 0; r < 3; r++) {
    //     for (int c = 0; c < 3; c++) {
    //         cin >> matrix[r][c];
    //     }
    // }

    for (auto row : matrix) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << "\n";
    }

    vector<vector<vector<int>>> cube(3, vector<vector<int>>(3, vector<int>(3, 0)));
}