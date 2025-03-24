#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &vi : v) {
        cin >> vi;
    }
    for (auto vi : v) {
        cout << vi << "\n";
    }
}
